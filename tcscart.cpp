#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Point {
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
};


Point rotatePoint(const Point &p, double theta) {
    return Point(p.x * cos(theta) - p.y * sin(theta),
                 p.x * sin(theta) + p.y * cos(theta));
}


pair<double, double> getBoundingBox(const vector<Point> &polygon, double theta) {
    double minX = 1e9, maxX = -1e9, minY = 1e9, maxY = -1e9;
    for (const auto &p : polygon) {
        Point rotated = rotatePoint(p, theta);
        minX = min(minX, rotated.x);
        maxX = max(maxX, rotated.x);
        minY = min(minY, rotated.y);
        maxY = max(maxY, rotated.y);
    }
    return {maxX - minX, maxY - minY};
}

int main() {
    int N;
    cin >> N;  // Number of points in the polygon
    vector<Point> polygon(N);
    for (int i = 0; i < N; ++i) {
        cin >> polygon[i].x >> polygon[i].y;
    }

    double minArea = 1e9;   // To store the minimum area of the bounding box
    double bestWidth = 0, bestHeight = 0;

  
    for (int i = 0; i < 360; ++i) {
        double angle = i * M_PI / 180.0;  // Convert angle to radians
        auto [width, height] = getBoundingBox(polygon, angle);  // Get the bounding box
        double area = width * height;
        
        if (area < minArea) {
            minArea = area;
            bestWidth = width;
            bestHeight = height;
        }
    }

    if (bestWidth > bestHeight) {
        swap(bestWidth, bestHeight);
    }

    cout << fixed << setprecision(0) << round(bestWidth) << " "
         << fixed << setprecision(0) << round(bestHeight);

    return 0;
}