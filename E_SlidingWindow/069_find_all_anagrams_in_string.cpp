// 69. Find All Anagrams in a String
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> findAnagrams(const string& s, const string& p) {
    vector<int> r;
    int n = s.size(), m = p.size();
    if (n < m) return r;
    int need[26] = {0}, win[26] = {0};
    for (char c : p) need[c - 'a']++;
    for (int i = 0; i < n; i++) {
        win[s[i] - 'a']++;
        if (i >= m) win[s[i - m] - 'a']--;
        if (i >= m - 1 && equal(need, need + 26, win)) r.push_back(i - m + 1);
    }
    return r;
}

int main() {
    show(findAnagrams("cbaebabacd", "abc"));  // 0 6
}
