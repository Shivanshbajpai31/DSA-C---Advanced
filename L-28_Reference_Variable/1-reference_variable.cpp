#include<bits/stdc++.h>
using namespace std;

//need of an pass by reference because it makes does not make a copy of varible

void update(int &n){
    n++; // pass by reference
}
 void update2(int n2){
    n2++;  // pass by value it will not update the value into the main the function

 }

int main(){
    /*
    int i=5;
    int &j=i; // intialising reference variable
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << i << endl;
    cout << j << endl;
    */
   int n=5;
   cout << " Before " << n << endl;
   update(n);
   cout << "After "  << n << endl;


    return 0;

}