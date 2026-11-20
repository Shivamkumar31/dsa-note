// 25. Find the First Non-Repeating Character
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int firstNonRepeating(const string& s) {  // returns index or -1
    int cnt[256] = {0};
    for (unsigned char c : s) cnt[c]++;
    for (int i = 0; i < (int)s.size(); i++)
        if (cnt[(unsigned char)s[i]] == 1) return i;
    return -1;
}

int main() {
    string s = "swiss";
    int i = firstNonRepeating(s);
    if (i == -1) cout << "None\n";
    else cout << "First non-repeating: " << s[i] << " at index " << i << "\n";
}
