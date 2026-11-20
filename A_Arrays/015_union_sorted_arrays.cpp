// 15. Find the Union of Two Sorted Arrays
// Time: O(n+m), Space: O(1) extra

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> unionSorted(const vector<int>& a, const vector<int>& b) {
    vector<int> r;
    size_t i = 0, j = 0;
    while (i < a.size() || j < b.size()) {
        int v;
        if (j >= b.size() || (i < a.size() && a[i] <= b[j])) v = a[i++];
        else v = b[j++];
        if (r.empty() || r.back() != v) r.push_back(v);
    }
    return r;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 5}, b = {2, 3, 4, 6};
    show(unionSorted(a, b));
}
