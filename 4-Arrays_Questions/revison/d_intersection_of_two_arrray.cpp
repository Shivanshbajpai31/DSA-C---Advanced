#include<bits/stdc++.h>
using namespace std;

int i=0;  j=0;
vector<int>ans;
while (i <n && j <m){
    if (arr[i]== arr[j]){
        ans.pushback(arr[i]);
        i++;
        j++;

    }
    else if(arr[i] <arr[j]){
        i++;
    }
    else(arr[i]> arr[j]){
        j++;
    }
    return ans;

}