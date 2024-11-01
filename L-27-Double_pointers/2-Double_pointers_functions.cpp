#include<bits/stdc++.h>
using namespace std;

void update(int **p){
   // p=p+1;
    //Nothing will happened 

   // *p=*p+1; // it will update the the value of int *p=&i .In this it willmupdate the addresss of &i

   **p2=**p2+1; // in this it will update the value of i 

}
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout << "before" << i << endl;
    cout << "before" << p << endl;
    cout << "before" << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;

    return 0;
}