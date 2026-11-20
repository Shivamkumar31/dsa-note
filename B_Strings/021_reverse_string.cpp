// 21. Reverse a String
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

string reverseString(string s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) swap(s[l++], s[r--]);
    return s;
}

int main() {
    cout << reverseString("hello world") << "\n";
}
