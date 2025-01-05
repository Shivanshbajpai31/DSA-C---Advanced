#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[15];

    cout << "Value of the 0 index is :" << arr[14] << endl;// it gives the random vlaues 

    //Initialisation an array
    int second[3]={5,7,11};

    cout << "Value at 2 index " << second[2] << endl;
    // 
    int third[15]={2,7};
    // printing the array
    int n=15; // 
    for(int i=0; i<n ; i++){
        cout << third[i] << " "; 
    }
    cout <<" "<<  endl;

     int fourth[10]={0};
     int n1=10;
     for (int i=0 ; i<n1 ; i++){
        cout << fourth[i] << " ";
     }
     // if we want to initialise the all the elements of the arrays

    return 0;

}

