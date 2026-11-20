// 39. Find the First Unique Element
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int firstUnique(const vector<int>& a) {  // returns -1 if none
    unordered_map<int, int> f;
    for (int x : a) f[x]++;
    for (int x : a) if (f[x] == 1) return x;
    return -1;
}

int main() {
    vector<int> a = {4, 5, 1, 2, 0, 4, 5, 1};
    cout << "First unique: " << firstUnique(a) << "\n";  // 2
}
