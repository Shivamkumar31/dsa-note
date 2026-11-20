// 20. Find the Longest Subarray with Sum K (works with negatives)
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int longestSubarraySumK(const vector<int>& a, long long k) {
    unordered_map<long long, int> first;  // prefix sum -> earliest index
    long long sum = 0;
    int best = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        sum += a[i];
        if (sum == k) best = i + 1;
        auto it = first.find(sum - k);
        if (it != first.end()) best = max(best, i - it->second);
        if (!first.count(sum)) first[sum] = i;
    }
    return best;
}

int main() {
    vector<int> a = {10, 5, 2, 7, 1, 9};
    cout << "Longest length: " << longestSubarraySumK(a, 15) << "\n";  // 4
}
