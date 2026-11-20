// 46. Subarray Sum Equals K (count of subarrays)
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int subarraySum(const vector<int>& a, int k) {
    unordered_map<long long, int> cnt;
    cnt[0] = 1;
    long long sum = 0;
    int res = 0;
    for (int x : a) {
        sum += x;
        auto it = cnt.find(sum - k);
        if (it != cnt.end()) res += it->second;
        cnt[sum]++;
    }
    return res;
}

int main() {
    vector<int> a = {1, 2, 3, -3, 3};
    cout << "Count: " << subarraySum(a, 3) << "\n";  // 5
}
