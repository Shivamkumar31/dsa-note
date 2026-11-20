// 28. Check Whether Two Strings Are Equal
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool areEqual(const string& a, const string& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++)
        if (a[i] != b[i]) return false;
    return true;
}

int main() {
    cout << boolalpha << areEqual("code", "code") << " " << areEqual("code", "Code") << "\n";
}
