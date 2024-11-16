#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    //base case 

    //if element not found
    if (s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    // if element is found

    if (arr[mid]==k)
        return true;

    if (arr[mid] ==k){
        return true;

    }
    else{
        return binarySearch(arr,s, mid-1, k);
    }
}

int main(){
    int arr[5]={2,5,7,8,10};
    int size=5;
    int key=10;

    cout << "Present or not" << binarySearch(arr,0,size-1, key) << endl;

    return 0;
}