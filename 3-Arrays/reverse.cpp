// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int arr[], int n){
//   int start=0;
//   int end=n-1;

//   while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
// }

// void printArray(int arr[], int size){

//   for (int i=0 ;i< size; i++){
//     cout << arr[i] << " ";
//   }
//   cout << endl;
  
// }
// int main(){
//   int arr[6] = {1,4,0,5,-2,15};
//   int brr[5]={2,3,6,7,8};

//   reverse(arr,6);
//   reverse(brr,5);

//   printArray(arr,6);
//   printArray(brr,5);

//   return 0;
  
// }

#include<iostream>
using namespace std;

void reverse(int arr[], int n){
  int start=0;
  int end=n-1;

  while (start <=end){
    swap (arr[start], arr[end]);
    start++; 
    end--;
  }
}
void printArray(int arr[], int n){
  for (int i=1 ; i< n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int arr[6]={1,4,0,5,-2,15};
  int brr[6]={2,3,6,9,4};

  reverse(arr,6);
  reverse(brr,6);
  return 0;


  
}