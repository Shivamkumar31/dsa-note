// 3. Find the Smallest Element in an Array
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int findSmallest(const vector<int>& a) {
    int mn = a[0];
    for (int x : a) mn = min(mn, x);
    return mn;
}

int main() {
    vector<int> a = {3, 7, 1, 9, 4};
    cout << "Smallest: " << findSmallest(a) << "\n";
}
