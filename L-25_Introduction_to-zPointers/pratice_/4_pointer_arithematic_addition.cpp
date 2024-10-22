#include<bits/stdc++.h>
using namespace std;

int main(){
    // arithematic additon 
    int i=3;
    int *t = &i;
    //cout << (*t)++ << endl;
    *t= *t+1;
    cout << *t << endl; // gives 4 

    cout << "before t " <<t <<  endl;
    t=t+1;
    cout << "after t " << t << endl; // gives another address

    return 0 ;
}