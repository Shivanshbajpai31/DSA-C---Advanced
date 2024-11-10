#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=5;
    int &j=i; // intialising reference variable
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << i << endl;
    cout << j << endl;

    return 0;
    
}