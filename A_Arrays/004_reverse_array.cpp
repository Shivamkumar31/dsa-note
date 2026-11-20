// 4. Reverse an Array
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

void reverseArray(vector<int>& a) {
    int l = 0, r = (int)a.size() - 1;
    while (l < r) swap(a[l++], a[r--]);
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    reverseArray(a);
    show(a);
}
