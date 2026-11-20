// 40. Check Whether Two Arrays Are Equal (same elements, any order)
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool areEqual(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    unordered_map<int, int> f;
    for (int x : a) f[x]++;
    for (int x : b) if (--f[x] < 0) return false;
    return true;
}

int main() {
    cout << boolalpha << areEqual({1, 2, 5, 4, 0}, {2, 4, 5, 0, 1}) << " "
         << areEqual({1, 2, 2}, {1, 1, 2}) << "\n";
}
