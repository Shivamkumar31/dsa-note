// 42. Find the Union of Two Arrays Using Hash Set
// Time: O(n+m), Space: O(n+m)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> unionArrays(const vector<int>& a, const vector<int>& b) {
    unordered_set<int> seen;
    vector<int> r;
    for (int x : a) if (seen.insert(x).second) r.push_back(x);
    for (int x : b) if (seen.insert(x).second) r.push_back(x);
    return r;
}

int main() {
    show(unionArrays({1, 2, 3, 3}, {3, 4, 5, 1}));  // 1 2 3 4 5
}
