// 54. Reverse a String Using Two Pointers
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

void reverseString(string& s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) swap(s[l++], s[r--]);
}

int main() {
    string s = "two pointers";
    reverseString(s);
    cout << s << "\n";
}
