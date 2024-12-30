// #include <bits/stdc++.h>

// #include<bits/stdc++.h>
// using namespace std;

// void update(int arr[], int n){
//   cout << endl<< "Inside the main function";

//   for (int i=0; i<3; i++){
//     cout << arr[i] << " ";
    
//   }cout << endl;
// }
// int  main(){
//   int arr[3] = {1,2,3};
//   update(arr,3);

//   for (int i=0; i<3; i++){
//       cout << arr[i] << " ";
//   }
//     cout << endl;
//   return 0;
//   }

  
// }

#include<iostream>
using namespace std;

void update(int arr[], int n){
  cout <<  "Inside the main function"<< endl;

  arr[0]=120;
  for (int i=0 ; i<3; i++){
    cout << arr[i] << " ";
    
  }
  cout << endl;
  cout << "Going back to the main function" << endl;
  
}



int main(){
  int arr[3]={1,2,3};
  update(arr,3);

  for (int i=0 ;i <3; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}