// 67. Longest Repeating Character Replacement
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int characterReplacement(const string& s, int k) {
    int cnt[26] = {0}, maxFreq = 0, left = 0, best = 0;
    for (int r = 0; r < (int)s.size(); r++) {
        maxFreq = max(maxFreq, ++cnt[s[r] - 'A']);
        while ((r - left + 1) - maxFreq > k) cnt[s[left++] - 'A']--;
        best = max(best, r - left + 1);
    }
    return best;
}

int main() {
    cout << characterReplacement("AABABBA", 1) << "\n";  // 4
}
