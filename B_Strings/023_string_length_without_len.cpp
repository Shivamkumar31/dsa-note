// 23. Find the Length of a String Without Using len()/size()
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int myLength(const char* s) {
    int n = 0;
    while (s[n] != '\0') n++;
    return n;
}

int main() {
    const char* s = "DataStructures";
    cout << "Length: " << myLength(s) << "\n";
}
