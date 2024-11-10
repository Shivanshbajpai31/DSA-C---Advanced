#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={11,22,33,44,55};

    cout << "Address of 1st is :" << arr << endl;
    cout << arr[0] << endl;  //gives value of o index

    cout << "Address is " << &arr[0] << endl; // gives addressss

    cout << "4th is " << *arr << endl;//first memory will print i.e is 11
    cout << "5th is " << *arr+1 << endl; // it will increment the first array values the valuesss that is 12 .update the value
    cout << " 6th is :" << *(arr+1) << endl; // it will give 22
    cout << "7th is " << *(arr)+1 << endl; // Same things happen in 5th printing statement
    cout << "8th is " << arr[2] << endl;
    cout << "9th is " << *(arr+2) << endl; // gives 33

    int i=3;
    cout << i[arr] << endl; // gives 44



    return 0;
}