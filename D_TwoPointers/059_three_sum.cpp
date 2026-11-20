// 59. Three Sum
// Time: O(n^2), Space: O(1) extra

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<vector<int>> threeSum(vector<int> a) {
    sort(a.begin(), a.end());
    vector<vector<int>> r;
    int n = a.size();
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && a[i] == a[i - 1]) continue;
        int l = i + 1, h = n - 1;
        while (l < h) {
            int s = a[i] + a[l] + a[h];
            if (s < 0) l++;
            else if (s > 0) h--;
            else {
                r.push_back({a[i], a[l], a[h]});
                l++; h--;
                while (l < h && a[l] == a[l - 1]) l++;
                while (l < h && a[h] == a[h + 1]) h--;
            }
        }
    }
    return r;
}

int main() {
    for (auto& t : threeSum({-1, 0, 1, 2, -1, -4})) show(t);
}
