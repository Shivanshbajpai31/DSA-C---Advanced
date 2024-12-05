#include<bits/stdc++.h>

using namespace std;

int solve(string& str, vector<string>& patterns, unordered_map<string, int>& cache) {
    if (cache.count(str)) return cache[str];

    int result = 0;

    for (auto& pattern : patterns) {
        size_t index = str.find(pattern); 
        if (index != string::npos) {
            string new_str = str.substr(0, index) + str.substr(index + pattern.size());
            result = max(result, 1 + solve(new_str, patterns, cache));
        }
    }

    return cache[str] = result;
}

int main() {
    int numPatterns;
    cin >> numPatterns;

    vector<string> patterns(numPatterns);
    for (int i = 0; i < numPatterns; ++i) {
        cin >> patterns[i];
    }

    string mainString;
    cin >> mainString;

    unordered_map<string, int> cache;

    cout << solve(mainString, patterns, cache);

    return 0;
}
