#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1; // base case 
    }
    return 2*power(n-1);

}

int main(){
    int n;
    cin >>n ;
    cout << endl;
    int ans=power(n);
    cout << ans << endl;
    return 0;
}