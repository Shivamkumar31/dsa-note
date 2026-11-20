// 30. Find the Longest Common Prefix
// Time: O(total chars), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

string longestCommonPrefix(const vector<string>& strs) {
    if (strs.empty()) return "";
    string prefix = strs[0];
    for (size_t i = 1; i < strs.size(); i++) {
        size_t j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) j++;
        prefix.resize(j);
        if (prefix.empty()) break;
    }
    return prefix;
}

int main() {
    vector<string> s = {"flower", "flow", "flight"};
    cout << "LCP: \"" << longestCommonPrefix(s) << "\"\n";  // fl
}
