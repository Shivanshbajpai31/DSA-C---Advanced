#include<bits/stdc++.h>
using namespace std;

int power(int a , int b){  // here b is power and a is numeric 
    if(b==0)
       return 1;

    if (b==1)
      return a;
    
    //recursive call
    int ans=power(a, b/2);

    if(b %2 ==0){
        //if b is even
        return ans*ans;
    
    } 
    else{
        //if b is odd
        return a*ans *ans;
    }
}
int main(){
    int a , b;
    cin >> a >> b;
    int ans=power(a,b);
    cout << "Answer is :" << ans << endl;
    return 0;
    
}