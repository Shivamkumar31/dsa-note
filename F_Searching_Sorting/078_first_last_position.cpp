// 78. Find First and Last Position of Element in Sorted Array
// Time: O(log n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int lowerBound(const vector<int>& a, int x) {
    int lo = 0, hi = a.size();
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] < x) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}

pair<int, int> searchRange(const vector<int>& a, int x) {
    int first = lowerBound(a, x);
    if (first == (int)a.size() || a[first] != x) return {-1, -1};
    int last = lowerBound(a, x + 1) - 1;
    return {first, last};
}

int main() {
    vector<int> a = {5, 7, 7, 8, 8, 10};
    auto p = searchRange(a, 8);
    cout << p.first << " " << p.second << "\n";  // 3 4
}
