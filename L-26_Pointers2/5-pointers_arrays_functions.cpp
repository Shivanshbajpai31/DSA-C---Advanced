#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[] , int n){
    cout << "Size: " << sizeof(arr) << endl; // it will  give the size of an address, not full arrays size .
    
    int sum=0;
    for(int i=0 ; i<n ;i++){
        sum +=i[arr];

    }
    return sum;
    
}


int main(){
    int arr[5]={1,2,3,4,5};
    cout << "Sum is :" << getSum(arr,5) << endl;
    return 0;
}
