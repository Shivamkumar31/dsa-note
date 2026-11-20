// 48. Check Whether an Array Contains Duplicates
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool containsDuplicate(const vector<int>& a) {
    unordered_set<int> s;
    for (int x : a) if (!s.insert(x).second) return true;
    return false;
}

int main() {
    cout << boolalpha << containsDuplicate({1, 2, 3, 1}) << " "
         << containsDuplicate({1, 2, 3, 4}) << "\n";
}
