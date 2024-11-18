#include<bits/stdc++.h>
using namespace std;

void countStairs(int nstairs){
    // base case
    if (nstairs <0){
        return 0;
    }
    if (nstairs==1){
        return 1;

    }


    //recursive relation 
    int ans= countStairs(nstairs-1) + (nstairs-2);

    return ans;

}
int main (){

}