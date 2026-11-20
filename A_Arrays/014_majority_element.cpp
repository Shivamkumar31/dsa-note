// 14. Find the Majority Element (> n/2) - Boyer-Moore
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int majorityElement(const vector<int>& a) {
    int cand = 0, cnt = 0;
    for (int x : a) {
        if (cnt == 0) cand = x;
        cnt += (x == cand) ? 1 : -1;
    }
    cnt = count(a.begin(), a.end(), cand);  // verify
    return cnt > (int)a.size() / 2 ? cand : -1;
}

int main() {
    vector<int> a = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority: " << majorityElement(a) << "\n";
}
