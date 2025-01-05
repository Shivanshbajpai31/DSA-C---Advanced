#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0 ; i<size; i++){
         cout << arr[i] << " ";
    }
    cout <<"Printing done!!" <<  endl;
}

int main(){
    int first[10]={2,7};
   int  n =10;
    printArray(first,10);

    int second[11]={0};
    n =11;
    printArray(second,11);
}
