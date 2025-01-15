#include<bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int> *arr[]){
    int ans=0;
    //Xor for all elements
    for (int i=0 ; i< arr.size(); i++){    // first remove the non duplicates values 
        ans=ans^arr.size();
    }
    //Xor for 1,n-1 element
    for (int i =1; i <arr.size(); i++){
        ans=ans^i;                              // then do XOR by 0 and the remaing values
    }
    return ans;
}