// 11. Find the Element That Appears Once (others twice)
// Time: O(n), Space: O(1) - XOR

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int appearsOnce(const vector<int>& a) {
    int x = 0;
    for (int v : a) x ^= v;
    return x;
}

int main() {
    vector<int> a = {4, 1, 2, 1, 2};
    cout << "Appears once: " << appearsOnce(a) << "\n";
}
