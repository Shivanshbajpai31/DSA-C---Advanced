#include<iostream>
using namespace std;

int main(){
    int arr[3][4];

    //taking input to the user in rows
    /*for (int row=0; row<3; row ++){
        for (int col=0; col <4 ; col++){
            cin >> arr[row][col];
        }
    } */

    // Similarly we can print this  in in columns
    for (int col=0; col<4; col ++){
        for (int row=0; row <3 ; row ++){
            cin >> arr[row][col];
        }
    }
     cout << "Printing the array" << endl;

     for (int row =0 ; row <3; row++){
        for (int col=0 ; col<4 ; col++){
        cout << arr[row][col] << " ";
     }
       cout << endl;
     }
     return 0;
}
