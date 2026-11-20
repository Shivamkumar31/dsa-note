// 43. Group Anagrams
// Time: O(n * k log k), Space: O(n*k)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<vector<string>> groupAnagrams(const vector<string>& strs) {
    map<string, vector<string>> g;
    for (auto& s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        g[key].push_back(s);
    }
    vector<vector<string>> r;
    for (auto& [k, v] : g) r.push_back(v);
    return r;
}

int main() {
    vector<string> s = {"eat", "tea", "tan", "ate", "nat", "bat"};
    for (auto& grp : groupAnagrams(s)) {
        for (auto& w : grp) cout << w << " ";
        cout << "\n";
    }
}
