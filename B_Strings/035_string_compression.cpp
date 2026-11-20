// 35. String Compression (a2b1c5a3)
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

string compress(const string& s) {
    string r;
    for (size_t i = 0; i < s.size();) {
        size_t j = i;
        while (j < s.size() && s[j] == s[i]) j++;
        r += s[i];
        r += to_string(j - i);
        i = j;
    }
    return r;
}

int main() {
    cout << compress("aabcccccaaa") << "\n";  // a2b1c5a3
}
