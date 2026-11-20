// 38. Find Duplicate Elements in an Array
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> findDuplicates(const vector<int>& a) {
    unordered_map<int, int> f;
    for (int x : a) f[x]++;
    vector<int> r;
    for (auto& [k, v] : f) if (v > 1) r.push_back(k);
    sort(r.begin(), r.end());
    return r;
}

int main() {
    vector<int> a = {4, 3, 2, 7, 8, 2, 3, 1};
    show(findDuplicates(a));  // 2 3
}
