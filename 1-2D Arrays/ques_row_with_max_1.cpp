//row with max 1: https://www.naukri.com/code360/problems/row-with-maximum-1-s_1112656?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>
using namespace std;

//int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m){
    int cnt_max=0;
    int index=-1;

    for(int i =0 ; i<n ; i++){
        int cnt_ones=0;
        for (int j=0; j<m; j++){
            cnt_ones += matrix[i][j];
        }
        if (cnt_ones> cnt_max){
            cnt_max=cnt_ones;
            index=i;
        }

    }
    return index;
}