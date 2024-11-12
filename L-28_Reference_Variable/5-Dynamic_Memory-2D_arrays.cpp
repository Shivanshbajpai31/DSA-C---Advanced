#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int** arr=new int*[n];

    //creating 
    for(int i=0 ; i<n ; i++ ){
        arr[i]=new int[n];
    }
    // taking the user input
    for (int i=0; i<n; i++){
        for (int j=0 ; j<n; j++){
            cin >> arr[i][j];
        }
    }
    // printing the elements
    cout << endl;
    for (int i=0; i<n; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }
  //  return 0;

}