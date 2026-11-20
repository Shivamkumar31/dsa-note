// 36. Two Sum Using Hash Map
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

pair<int, int> twoSum(const vector<int>& a, int target) {
    unordered_map<int, int> mp;  // value -> index
    for (int i = 0; i < (int)a.size(); i++) {
        if (mp.count(target - a[i])) return {mp[target - a[i]], i};
        mp[a[i]] = i;
    }
    return {-1, -1};
}

int main() {
    vector<int> a = {3, 2, 4, 6};
    auto p = twoSum(a, 6);
    cout << p.first << " " << p.second << "\n";  // 1 2
}
