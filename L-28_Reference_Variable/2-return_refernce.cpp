#include<bits/stdc++.h>
using namespace std;

int &func(int a){
    int num=a;
    int &ans=num; // bad pratice

    return ans;


}
int main(){
    int a;
   cout <<  func(a);
    return 0;
}