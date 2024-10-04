#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector <int > ans;
    int row=matrix.size();
    int col=matrix[0].size();
    int count =0;
    int total =row*col;

    // Index initalization
    int startingRow=0;
    int startingCol=0;
    int endingRow=row -1;
    int endingCol=col-1;

    while (count <total){
            //Print startigRow
        for (int index=startingCol ; count < total && index <=endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        // ending Col;
          for (int index=startingRow ; count < total && index <=endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        //ending  row
          for (int index=endingCol ; count < total && index >=startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
          //starting  col
            for (int index=endingRow; count < total && index >=startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;

    }
    return ans;
}
