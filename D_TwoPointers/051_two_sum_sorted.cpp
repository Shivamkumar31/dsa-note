// 51. Two Sum in a Sorted Array
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

pair<int, int> twoSumSorted(const vector<int>& a, int target) {
    int l = 0, r = (int)a.size() - 1;
    while (l < r) {
        int s = a[l] + a[r];
        if (s == target) return {l, r};
        if (s < target) l++;
        else r--;
    }
    return {-1, -1};
}

int main() {
    vector<int> a = {2, 7, 11, 15};
    auto p = twoSumSorted(a, 9);
    cout << p.first << " " << p.second << "\n";  // 0 1
}
