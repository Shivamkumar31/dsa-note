// 56. Merge Two Sorted Arrays
// Time: O(n+m), Space: O(n+m)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> mergeSorted(const vector<int>& a, const vector<int>& b) {
    vector<int> r;
    size_t i = 0, j = 0;
    while (i < a.size() && j < b.size())
        r.push_back(a[i] <= b[j] ? a[i++] : b[j++]);
    while (i < a.size()) r.push_back(a[i++]);
    while (j < b.size()) r.push_back(b[j++]);
    return r;
}

int main() {
    show(mergeSorted({1, 3, 5, 7}, {2, 4, 6, 8, 10}));
}
