// 70. Permutation in String
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool checkInclusion(const string& p, const string& s) {
    int n = s.size(), m = p.size();
    if (m > n) return false;
    int need[26] = {0}, win[26] = {0};
    for (char c : p) need[c - 'a']++;
    for (int i = 0; i < n; i++) {
        win[s[i] - 'a']++;
        if (i >= m) win[s[i - m] - 'a']--;
        if (i >= m - 1 && equal(need, need + 26, win)) return true;
    }
    return false;
}

int main() {
    cout << boolalpha << checkInclusion("ab", "eidbaooo") << " "
         << checkInclusion("ab", "eidboaoo") << "\n";
}
