// Arrays and pointers difference 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int temp[10]={1,2,3,4,5};
/*
    cout << sizeof(temp) << endl; // for array it will give 40
    cout << sizeof(*temp) << endl; //  it will give 4 bytes
    cout << sizeof(&temp) << endl; // 8 bytes

    int *ptr=&temp[0];
    cout << sizeof(ptr) << endl; // it will 8 bytes
    cout << sizeof(*ptr) << endl; // gives 4
    cout << sizeof(&ptr) << endl; // gives 4 */

    // for addresss
    /*
    cout << "1 is" << &temp[0] << endl;

    int *p=&temp[0];
    cout << "2" << &p << endl; 
    */

    // for symbol table 
    // in this we cannot change symbol table in arrays 
    int arr[10];
    int *ptr=&arr[0];
     cout << ptr << endl;
     ptr=ptr+1;
     cout << ptr << endl;

    

    return 0;

}