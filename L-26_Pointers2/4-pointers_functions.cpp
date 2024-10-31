#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    cout << *p << endl;
}
void update(int *p){
  //  p=p+1;
    //cout << "inside :" << p << endl;// it will update the addresss not value 
    //for value 
    *p=*p+1;
}


int main(){
    int value=5;
    int *p = &value;

   print (p);

   cout << "Before" << *p << endl;
   update(p);
   cout << "after " << *p << endl;
    return 0;
}