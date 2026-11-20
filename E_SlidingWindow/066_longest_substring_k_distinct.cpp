// 66. Longest Substring with At Most K Distinct Characters
// Time: O(n), Space: O(k)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int longestKDistinct(const string& s, int k) {
    unordered_map<char, int> f;
    int best = 0, left = 0;
    for (int r = 0; r < (int)s.size(); r++) {
        f[s[r]]++;
        while ((int)f.size() > k) {
            if (--f[s[left]] == 0) f.erase(s[left]);
            left++;
        }
        best = max(best, r - left + 1);
    }
    return best;
}

int main() {
    cout << longestKDistinct("eceba", 2) << "\n";  // 3
}
