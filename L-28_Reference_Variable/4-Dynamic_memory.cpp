#include<bits/stdc++.h>
using namespace std;

int  getSum(int *a,int n){
    int sum=0;
    for (int i=0; i < n;i++ ){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    
    // initialising the local variableee

    int *arr=new int [n];

    // taking the user input 
    for (int i=0; i <n ; i++){
        cin >> arr[n];
    }
    int ans=getSum(arr,n);
    cout << "answer is " << ans << endl;
    return 0;


}