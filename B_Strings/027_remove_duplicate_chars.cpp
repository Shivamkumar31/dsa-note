// 27. Remove All Duplicate Characters
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

string removeDuplicates(const string& s) {
    bool seen[256] = {false};
    string r;
    for (unsigned char c : s)
        if (!seen[c]) { seen[c] = true; r += c; }
    return r;
}

int main() {
    cout << removeDuplicates("programming") << "\n";  // progamin
}
