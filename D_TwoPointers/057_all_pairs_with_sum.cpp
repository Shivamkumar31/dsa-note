// 57. Find All Pairs with a Given Sum
// Time: O(n log n), Space: O(1) extra

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<pair<int, int>> allPairs(vector<int> a, int target) {
    sort(a.begin(), a.end());
    vector<pair<int, int>> r;
    int l = 0, h = (int)a.size() - 1;
    while (l < h) {
        int s = a[l] + a[h];
        if (s < target) l++;
        else if (s > target) h--;
        else {
            r.push_back({a[l], a[h]});
            int lv = a[l], hv = a[h];
            while (l < h && a[l] == lv) l++;   // skip duplicates
            while (l < h && a[h] == hv) h--;
        }
    }
    return r;
}

int main() {
    vector<int> a = {1, 5, 7, -1, 5, 3, 4};
    for (auto& p : allPairs(a, 6)) cout << "(" << p.first << ", " << p.second << ") ";
    cout << "\n";
}
