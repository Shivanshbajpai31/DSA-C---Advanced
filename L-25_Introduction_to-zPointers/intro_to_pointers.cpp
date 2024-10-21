#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=5;
    cout << num << endl;

    //address operator &
    cout << "addresss of num is " << &num << endl;

    int *ptr=&num ;

    cout << "address is :" <<ptr << endl;
    cout << "value is: " << *ptr << endl;


    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;

    return 0;
}
