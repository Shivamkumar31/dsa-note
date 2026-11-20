// 72. Count Occurrences of Anagrams
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int countAnagrams(const string& text, const string& pat) {
    int n = text.size(), m = pat.size(), count = 0;
    if (n < m) return 0;
    int need[26] = {0}, win[26] = {0};
    for (char c : pat) need[c - 'a']++;
    for (int i = 0; i < n; i++) {
        win[text[i] - 'a']++;
        if (i >= m) win[text[i - m] - 'a']--;
        if (i >= m - 1 && equal(need, need + 26, win)) count++;
    }
    return count;
}

int main() {
    cout << countAnagrams("forxxorfxdofr", "for") << "\n";  // 3
}
