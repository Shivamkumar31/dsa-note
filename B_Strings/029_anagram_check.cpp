// 29. Check Whether Two Strings Are Anagrams
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool isAnagram(const string& a, const string& b) {
    if (a.size() != b.size()) return false;
    int cnt[256] = {0};
    for (unsigned char c : a) cnt[c]++;
    for (unsigned char c : b) if (--cnt[c] < 0) return false;
    return true;
}

int main() {
    cout << boolalpha << isAnagram("listen", "silent") << " " << isAnagram("abc", "abd") << "\n";
}
