// 45. Longest Consecutive Sequence
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int longestConsecutive(const vector<int>& a) {
    unordered_set<int> s(a.begin(), a.end());
    int best = 0;
    for (int x : s) {
        if (s.count(x - 1)) continue;  // not a sequence start
        int len = 1;
        while (s.count(x + len)) len++;
        best = max(best, len);
    }
    return best;
}

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2};
    cout << "Longest: " << longestConsecutive(a) << "\n";  // 4
}
