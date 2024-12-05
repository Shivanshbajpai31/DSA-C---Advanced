#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <climits>

using namespace std;


int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};


int bfs(const vector<string>& grid, pair<int, int> start, pair<int, int> end, int N) {
    int rows = N, cols = N;
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;
    int dist = 0;

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            auto [x, y] = q.front();
            q.pop();

   
            if (make_pair(x, y) == end) {
                return dist;
            }

            for (auto& dir : directions) {
                int nx = x + dir[0], ny = y + dir[1];
                if (nx >= 0 && ny >= 0 && nx < rows && ny < cols && !visited[nx][ny] && (grid[nx][ny] == 'T' || grid[nx][ny] == 'D')) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        dist++;
    }
    return -1;  
}


vector<vector<string>> divideIntoSheets(const vector<string>& grid, int N, int M) {
    vector<vector<string>> sheets;
    for (int i = 0; i < N; i += M) {
        for (int j = 0; j < N; j += M) {
            vector<string> sheet;
            for (int x = i; x < i + M; ++x) {
                sheet.push_back(grid[x].substr(j, M));
            }
            sheets.push_back(sheet);
        }
    }
    return sheets;
}


vector<string> reconstructMap(const vector<vector<string>>& rearrangedSheets, int M, int N) {
    int numSheets = N / M;
    vector<string> fullMap;
    for (int i = 0; i < numSheets; ++i) {
        for (int r = 0; r < M; ++r) {
            string row = "";
            for (int j = 0; j < numSheets; ++j) {
                row += rearrangedSheets[i * numSheets + j][r];
            }
            fullMap.push_back(row);
        }
    }
    return fullMap;
}


pair<int, int> findCoordinates(const vector<string>& grid, char target) {
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1};  
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> grid(N);
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

    
    vector<vector<string>> sheets = divideIntoSheets(grid, N, M);

    
    vector<vector<string>> rearrangedSheets(N / M, vector<string>(N / M));
    bool startPlaced = false, endPlaced = false;

    
    for (int i = 0; i < sheets.size(); ++i) {
        string flattened = "";
        for (const auto& row : sheets[i]) {
            flattened += row;
        }

        if (flattened.find('S') != string::npos && !startPlaced) {
            rearrangedSheets[0][0] = sheets[i];
            startPlaced = true;
        } else if (flattened.find('D') != string::npos && !endPlaced) {
            rearrangedSheets[N / M - 1][N / M - 1] = sheets[i];
            endPlaced = true;
        } else {
            for (int r = 0; r < N / M; ++r) {
                for (int c = 0; c < N / M; ++c) {
                    if (rearrangedSheets[r][c].empty()) {
                        rearrangedSheets[r][c] = sheets[i];
                        break;
                    }
                }
            }
        }
    }

    
    vector<string> fullMap = reconstructMap(rearrangedSheets, M, N);

   
    pair<int, int> start = findCoordinates(fullMap, 'S');
    pair<int, int> end = findCoordinates(fullMap, 'D');

    
    int shortestDistance = bfs(fullMap, start, end, N);
    

    cout << shortestDistance << endl;

    return 0;
}
