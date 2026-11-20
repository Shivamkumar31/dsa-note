// 44. Top K Frequent Elements
// Time: O(n), Space: O(n) - bucket sort

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> topKFrequent(const vector<int>& a, int k) {
    unordered_map<int, int> f;
    for (int x : a) f[x]++;
    vector<vector<int>> bucket(a.size() + 1);
    for (auto& [v, c] : f) bucket[c].push_back(v);
    vector<int> r;
    for (int c = (int)a.size(); c >= 1 && (int)r.size() < k; c--)
        for (int v : bucket[c]) {
            r.push_back(v);
            if ((int)r.size() == k) break;
        }
    return r;
}

int main() {
    vector<int> a = {1, 1, 1, 2, 2, 3};
    show(topKFrequent(a, 2));  // 1 2
}
