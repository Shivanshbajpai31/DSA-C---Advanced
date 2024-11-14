#include<bits/stdc++.h>
using namespace std;

int score=15;   // global variable is a bad pratice because everone can easily update the value as it can change the program 

void a(int &i){
    cout << score << " in a "  << endl;
    char ch='a';
    cout << i << endl;
}
void b(int &i){
    cout << score << "in b" << endl;
    char ch='b';
    cout << i << endl;
}

int main(){
    cout << score << "in main" << endl;
    int i=5;
    a(i);
    b(i);
    return 0;
}