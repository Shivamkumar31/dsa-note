// 73. Longest Subarray with At Most K Zeros
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int longestOnes(const vector<int>& a, int k) {
    int left = 0, zeros = 0, best = 0;
    for (int r = 0; r < (int)a.size(); r++) {
        if (a[r] == 0) zeros++;
        while (zeros > k) if (a[left++] == 0) zeros--;
        best = max(best, r - left + 1);
    }
    return best;
}

int main() {
    vector<int> a = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    cout << longestOnes(a, 2) << "\n";  // 6
}
