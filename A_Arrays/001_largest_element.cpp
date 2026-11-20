// 1. Find the Largest Element in an Array
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int findLargest(const vector<int>& a) {
    int mx = a[0];
    for (int x : a) mx = max(mx, x);
    return mx;
}

int main() {
    vector<int> a = {3, 7, 1, 9, 4};
    cout << "Largest: " << findLargest(a) << "\n";
}
