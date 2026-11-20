// 64. First Negative Number in Every Window of Size K
// Time: O(n), Space: O(k)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> firstNegatives(const vector<int>& a, int k) {
    deque<int> neg;  // indices of negatives in current window
    vector<int> r;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] < 0) neg.push_back(i);
        if (!neg.empty() && neg.front() <= i - k) neg.pop_front();
        if (i >= k - 1) r.push_back(neg.empty() ? 0 : a[neg.front()]);
    }
    return r;
}

int main() {
    vector<int> a = {12, -1, -7, 8, -15, 30, 16, 28};
    show(firstNegatives(a, 3));  // -1 -1 -7 -15 -15 0
}
