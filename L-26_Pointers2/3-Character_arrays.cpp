#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,2,4,5,6};
    char  ch[6]="abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c=&ch[0];
    cout << c << endl; //  bad praticeee print entire characters

    char temp='z';
    char *p=&temp;
    cout << p << endl;  // bad praticeeee
    return 0;
}