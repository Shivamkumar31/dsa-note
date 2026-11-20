// 71. Minimum Window Substring
// Time: O(n + m), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

string minWindow(const string& s, const string& t) {
    int need[128] = {0};
    for (char c : t) need[(int)c]++;
    int missing = t.size(), left = 0, bestStart = 0, bestLen = INT_MAX;
    for (int r = 0; r < (int)s.size(); r++) {
        if (need[(int)s[r]]-- > 0) missing--;
        while (missing == 0) {
            if (r - left + 1 < bestLen) { bestLen = r - left + 1; bestStart = left; }
            if (++need[(int)s[left++]] > 0) missing++;
        }
    }
    return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
}

int main() {
    cout << minWindow("ADOBECODEBANC", "ABC") << "\n";  // BANC
}
