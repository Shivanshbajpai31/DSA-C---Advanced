#include<bits/stdc++.h>
using namespace std;

bool isPaindrome(string str, int i , int j){
    // base case

    if(i>j)
      return true;
     if (str[i] != str[j])
       return false;

       //recursive call
       return isPaindrome(str, i+1, j-1);
}
int main(){
    string name="BookooB";
    cout<< endl;
    bool checkPalindrome= isPaindrome(name,0, name.length()-1);

    if ( checkPalindrome){
        cout << "It is palindrome" << endl;

    }
    else{
        cout << "It is not palindrome" << endl;
    }
    return 0;
}