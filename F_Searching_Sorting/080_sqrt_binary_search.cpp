// 80. Find the Square Root of a Number Using Binary Search (floor)
// Time: O(log n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

long long mySqrt(long long x) {
    long long lo = 0, hi = x, ans = 0;
    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        if (mid <= x / max(mid, 1LL) || mid == 0) { ans = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    return ans;
}

int main() {
    cout << mySqrt(36) << " " << mySqrt(50) << " " << mySqrt(1000000000000LL) << "\n";  // 6 7 1000000
}
