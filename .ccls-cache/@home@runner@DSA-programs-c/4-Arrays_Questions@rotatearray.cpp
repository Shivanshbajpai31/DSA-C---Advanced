#include <bits/stdc++.h>
using namespace std;

//FIrst find pivot element

int getPivot(vector<int >& arr, int n){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;

  while(s<e){
    if (arr[mid]>=arr[0]){
      s=mid+1;
    }
    else{
      e=mid;
    }
    mid=s+(e-s)/2;
  }
  return s;
}

//Binary Search
int binarySearch(vector<int >& arr, int s, int e, int key){
  int start=0;
  int end=e;
  int mid=s+(e-s)/2;

  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    else if (arr[mid]<key){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return -1;
  
}

//Functions
int findPosition(vector<int>arr,int n, int k){
  int pivot=getPivot(arr,n);
  if(k>=arr[pivot]&& k<=arr[n-1]){
    return binarySearch(arr,pivot,n-1,k);
  }
  else{
    return binarySearch(arr,0,pivot-1,k);
  }
}