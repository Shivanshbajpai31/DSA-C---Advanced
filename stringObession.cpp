#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int numPatterns;
    cin >> numPatterns;

    vector<string> patterns(numPatterns);
    for (int i = 0; i < numPatterns; ++i) {
        cin >> patterns[i];  // Reading the substrings
    }

    string mainString;
    cin >> mainString;  // Reading the main string

    int n = mainString.size();
    
    // DP array where dp[i] represents the max number of removals for string[0..i-1]
    vector<int> dp(n + 1, 0);
    
    // Check all substrings starting from index 0 to n-1
    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1];  // Default: no removal at this position
        
        // Try to remove each pattern if it ends at index i
        for (const string& pattern : patterns) {
            int patternLength = pattern.length();
            if (i >= patternLength && mainString.substr(i - patternLength, patternLength) == pattern) {
                dp[i] = max(dp[i], dp[i - patternLength] + 1);  // Update dp[i] if pattern is found
            }
        }
    }

    // The result is stored in dp[n], the maximum number of removals for the full string
    cout << dp[n] << endl;

    return 0;
}
