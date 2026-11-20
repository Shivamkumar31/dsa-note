// 61. Maximum Sum Subarray of Size K
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int maxSumK(const vector<int>& a, int k) {
    int n = a.size();
    if (k > n) return -1;
    int sum = 0;
    for (int i = 0; i < k; i++) sum += a[i];
    int best = sum;
    for (int i = k; i < n; i++) {
        sum += a[i] - a[i - k];
        best = max(best, sum);
    }
    return best;
}

int main() {
    vector<int> a = {2, 1, 5, 1, 3, 2};
    cout << "Max sum: " << maxSumK(a, 3) << "\n";  // 9
}
