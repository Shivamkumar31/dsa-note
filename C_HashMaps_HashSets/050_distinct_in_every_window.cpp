// 50. Count Distinct Elements in Every Window of Size K
// Time: O(n), Space: O(k)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> distinctInWindows(const vector<int>& a, int k) {
    unordered_map<int, int> f;
    vector<int> r;
    for (int i = 0; i < (int)a.size(); i++) {
        f[a[i]]++;
        if (i >= k) {
            if (--f[a[i - k]] == 0) f.erase(a[i - k]);
        }
        if (i >= k - 1) r.push_back(f.size());
    }
    return r;
}

int main() {
    vector<int> a = {1, 2, 1, 3, 4, 2, 3};
    show(distinctInWindows(a, 4));  // 3 4 4 3
}
