// 17. Two Sum
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> twoSum(const vector<int>& a, int target) {
    unordered_map<int, int> idx;
    for (int i = 0; i < (int)a.size(); i++) {
        auto it = idx.find(target - a[i]);
        if (it != idx.end()) return {it->second, i};
        idx[a[i]] = i;
    }
    return {};
}

int main() {
    vector<int> a = {2, 7, 11, 15};
    show(twoSum(a, 9));  // 0 1
}
