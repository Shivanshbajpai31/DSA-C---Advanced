#include <bits/stdc++.h>
using namespace std;

int main() {
  
  vector<vector<string>> A = {
    {"11111", "11111", "11111", "11111", "11111", "11111", "11111", "10001", "11111", "11111", "10001", "10000", "11111", "10001", "01110", "11111", "11111", "11111", "11111", "11111", "10001", "10001", "10001", "10001", "10001", "11111"},
    {"10001", "10001", "10000", "10001", "10000", "10000", "10000", "10001", "00100", "00001", "10010", "10000", "10101", "11001", "10001", "10001", "10001", "10001", "10000", "00100", "10001", "10001", "10001", "00000", "10001", "00000"},
    {"10001", "10001", "10000", "10001", "10000", "10000", "10000", "10001", "00100", "00001", "10100", "10000", "10101", "10101", "10001", "10001", "10001", "10001", "10000", "00100", "10001", "10001", "10001", "01010", "10001", "00010"},
    {"10001", "10001", "10000", "10001", "10000", "10000", "10000", "10001", "00100", "00001", "11000", "10000", "10101", "10011", "10001", "10001", "10001", "10001", "10000", "00100", "10001", "10001", "10001", "00000", "10001", "00000"},
    {"11111", "11111", "10000", "10001", "11111", "11111", "10111", "11111", "00100", "10001", "11111", "10000", "10101", "10001", "10001", "11111", "10101", "11111", "11111", "00100", "10001", "10001", "10101", "00100", "11111", "00100"},
    {"10001", "10001", "10000", "10001", "10000", "10000", "10001", "10001", "00100", "10001", "10001", "10000", "10001", "10001", "10001", "10000", "10001", "11000", "00001", "00100", "10001", "10001", "10101", "00000", "00001", "00000"},
    {"10001", "10001", "10000", "10001", "10000", "10000", "10001", "10001", "00100", "10001", "10001", "10000", "10001", "10001", "10001", "10000", "10011", "10100", "00001", "00100", "10001", "10001", "10101", "01010", "00001", "01000"},
    {"10001", "10001", "10000", "10001", "10000", "10000", "10001", "10001", "00100", "10001", "10001", "10000", "10001", "10001", "10001", "10000", "10001", "10010", "00001", "00100", "10001", "01010", "10101", "00000", "00001", "00000"},
    {"10001", "11111", "11111", "11111", "11111", "10000", "11111", "10001", "11111", "11111", "10001", "11111", "10001", "10001", "01110", "10000", "11111", "10001", "11111", "00100", "11111", "00100", "11111", "10001", "11111", "11111"}
  };
  
  vector<string> code(26, "");
  
  for (int row = 0; row< 9; row++) {
    for (int col = 0; col < 26; col++) {
      code[col] += A[row][col];
    }
  }
  
  map<string, char> mp;
  for(char ch = 'A'; ch <= 'Z'; ch++){
     mp[code[ch - 'A']] = ch;
  }
  
  vector<string> B;
  for (string s; cin >> s; B.push_back(s));

  for (int L = 0, R = 0; R < (int)B[0].size(); R++) {
    int zCnt = 0;
  
    for (int row = 0; row < 9; row++) {
      zCnt += B[row][R] == '0';
    }
  
    if (zCnt == 9) {
      L = R + 1;
    }
  
    else if (R - L + 1 == 5) {
      string alpha; // Corrected variable name here
      for (int row = 0; row < 9; row++) {
        alpha += string(B[row], L, 5); // Corrected variable name here
      }
    
      if (mp.count(alpha)) {
        cout << mp[alpha];
      }
    
      L = R + 1;
    }
  }

  return 0;
}