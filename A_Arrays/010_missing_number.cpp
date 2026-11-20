// 10. Find the Missing Number (1..n)
// Time: O(n), Space: O(1) - XOR

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int missingNumber(const vector<int>& a, int n) {
    int x = 0;
    for (int i = 1; i <= n; i++) x ^= i;
    for (int v : a) x ^= v;
    return x;
}

int main() {
    vector<int> a = {1, 2, 4, 5, 6};  // n = 6
    cout << "Missing: " << missingNumber(a, 6) << "\n";
}
