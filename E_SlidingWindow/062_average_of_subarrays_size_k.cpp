// 62. Average of All Subarrays of Size K
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<double> averages(const vector<int>& a, int k) {
    vector<double> r;
    long long sum = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        sum += a[i];
        if (i >= k) sum -= a[i - k];
        if (i >= k - 1) r.push_back((double)sum / k);
    }
    return r;
}

int main() {
    vector<int> a = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    show(averages(a, 5));
}
