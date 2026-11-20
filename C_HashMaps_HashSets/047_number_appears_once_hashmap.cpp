// 47. Find the Number That Appears Once (others appear 3 times) Using Hash Map
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int appearsOnce(const vector<int>& a) {
    unordered_map<int, int> f;
    for (int x : a) f[x]++;
    for (auto& [k, v] : f) if (v == 1) return k;
    return -1;
}

int main() {
    vector<int> a = {2, 2, 3, 2, 7, 7, 7};
    cout << "Appears once: " << appearsOnce(a) << "\n";  // 3
}
