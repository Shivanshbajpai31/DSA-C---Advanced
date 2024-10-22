#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=5;
    cout << num << endl;
    cout << "Address of a num is : " << &num << endl;

    int *ptr=&num; // initialise pointerr
    cout << "adresss is : " << ptr << endl; // gives addresss
    cout << "value is: " << *ptr << endl; // gives the value in which the address value is stored

    cout  << "Size of the integer "<< sizeof(num) << endl;
    cout  << "Size of the pointer "<< sizeof(ptr) << endl;
    return 0;
}