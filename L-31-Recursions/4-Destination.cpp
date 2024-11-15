#include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int desc){

    cout << "Source " << src << "Destination " << desc << endl;

    // base case
    if (src ==desc){
        

        cout << "Reached home " << endl;
        return ;
    }
    // processing -Means if we want to go we have to move one step 
    src++;

    // recursive function 
    reachHome(src, desc);


}

int main(){
    int desc=10;
    int src=1;

    cout << endl;

    reachHome(src , desc);

    return 0;

}