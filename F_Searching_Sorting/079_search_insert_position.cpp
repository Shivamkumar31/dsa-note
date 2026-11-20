// 79. Search Insert Position
// Time: O(log n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int searchInsert(const vector<int>& a, int target) {
    int lo = 0, hi = a.size();
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] < target) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}

int main() {
    vector<int> a = {1, 3, 5, 6};
    cout << searchInsert(a, 5) << " " << searchInsert(a, 2) << " " << searchInsert(a, 7) << "\n";  // 2 1 4
}
