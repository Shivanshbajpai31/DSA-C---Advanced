#include<bits/stdc++.h>
using namespace std;

void print (int arr[], int s , int e){
    for (int i =s ; i<e ; i++){
        cout << arr[i] << " ";
    }cout << endl;

}

bool binarySearch(int arr[] , int s, int e,  int k){
    // base case in which element is not found
    print (arr, s,e);
    if (s>e){
        return false;
    }
    int mid= s+(e-s)/2;
    cout << "Mid element is : " << mid << endl;

    //base  case in which element is found
    if (arr[mid]==k)
       return true;

    //recursive relation 
    if (arr[mid]<k){
        return binarySearch(arr, mid+1, e,k);
    }
    else{
        return binarySearch(arr, mid-1 , s, k);
    }
}
int main (){
    int arr[11]={2,4,6,10,14,18,22,38,49,55,222};
    int size=11;
    int key=222;

    cout << "Present or not"  << endl << binarySearch(arr, 0 ,size-1,key) << endl;;
   /* int ans= binarySearch(arr,0, 5, key);

    if (ans){
        cout << "Present" << endl;

    }
    else{
        cout << "Not present !!" << endl;
    }*/
    return 0;
}