// 63. Maximum of All Subarrays of Size K (Sliding Window Maximum)
// Time: O(n), Space: O(k) - monotonic deque

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> maxSlidingWindow(const vector<int>& a, int k) {
    deque<int> dq;  // indices, values decreasing
    vector<int> r;
    for (int i = 0; i < (int)a.size(); i++) {
        while (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        while (!dq.empty() && a[dq.back()] <= a[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) r.push_back(a[dq.front()]);
    }
    return r;
}

int main() {
    vector<int> a = {1, 3, -1, -3, 5, 3, 6, 7};
    show(maxSlidingWindow(a, 3));  // 3 3 5 5 6 7
}
