// 68. Minimum Size Subarray Sum
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int minSubArrayLen(int target, const vector<int>& a) {
    int left = 0, sum = 0, best = INT_MAX;
    for (int r = 0; r < (int)a.size(); r++) {
        sum += a[r];
        while (sum >= target) {
            best = min(best, r - left + 1);
            sum -= a[left++];
        }
    }
    return best == INT_MAX ? 0 : best;
}

int main() {
    vector<int> a = {2, 3, 1, 2, 4, 3};
    cout << minSubArrayLen(7, a) << "\n";  // 2
}
