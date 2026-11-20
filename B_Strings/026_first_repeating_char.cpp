// 26. Find the First Repeating Character
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int firstRepeating(const string& s) {  // index of first char whose repeat is seen earliest
    bool seen[256] = {false};
    for (int i = 0; i < (int)s.size(); i++) {
        unsigned char c = s[i];
        if (seen[c]) return i;
        seen[c] = true;
    }
    return -1;
}

int main() {
    string s = "abcdbea";
    int i = firstRepeating(s);
    if (i == -1) cout << "None\n";
    else cout << "First repeating: " << s[i] << "\n";  // b
}
