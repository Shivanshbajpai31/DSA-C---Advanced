#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={11,22,33,44,55};

    cout << "Address of 1st is :" << arr << endl;
    cout << arr[0] << endl;

    cout << "Address is " << &arr[0] << endl; // gives addressss

    cout << "4th is " << *arr << endl;
    cout << "5th is " << *arr+1 << endl; // it will update the valuesss
    cout << " 6th is :" << *(arr+1) << endl;
    cout << "7th is " << *(arr)+1 << endl; // update the value 
    cout << "8th is " << arr[2] << endl;
    cout << "9th is " << *(arr+2) << endl; // gives 33

    int i=3;
    cout << i[arr] << endl; // gives 44



    return 0;
}