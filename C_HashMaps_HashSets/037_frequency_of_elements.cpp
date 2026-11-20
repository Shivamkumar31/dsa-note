// 37. Count the Frequency of Each Element
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

map<int, int> frequency(const vector<int>& a) {
    map<int, int> f;
    for (int x : a) f[x]++;
    return f;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 1, 4, 2};
    for (auto& [k, v] : frequency(a)) cout << k << " -> " << v << "\n";
}
