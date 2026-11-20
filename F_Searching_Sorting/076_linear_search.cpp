// 76. Linear Search
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int linearSearch(const vector<int>& a, int key) {
    for (int i = 0; i < (int)a.size(); i++)
        if (a[i] == key) return i;
    return -1;
}

int main() {
    vector<int> a = {5, 3, 8, 1, 9};
    cout << "Index: " << linearSearch(a, 8) << "\n";  // 2
}
