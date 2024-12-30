#include<bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int &n , int capacity, int element,int pos ){
    if(n >= capacity){
        cout << " Array Capacity is full we cannot insert the element"<< endl;
        return;
    }
    pos--;

    // shift the elements
    for(int i =n-1; i>=pos; i--){
        arr[i+1]=arr[i];

    }
    arr[pos]=element ; // Insering the element it the array
    n++; //increment the size 

}

int main(){
    int capacity=10;
    int arr[capacity]={1,2,3,4,5};
    int n=5;
    
    int element=99;
    int pos=3;

    cout << "Before insertion" << endl;
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    insertElement(arr, n, capacity, element, pos);

    cout<< "After insertion"<< endl;
    for(int i=0 ; i<n ; i++){
        cout << arr[i] <<" ";

    }
    cout << endl;
    return 0;
}