#include<bits/stdc++.h>
using namespace std;

int findUinque(int arr[], int size){
    int ans=0;

    for (int i=0 ; i<size; i++){
        ans=ans^i; // here we use XOR  to solve this
    }
    return ans;
}
// this the function of the find unique