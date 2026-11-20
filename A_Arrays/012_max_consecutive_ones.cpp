// 12. Find the Maximum Consecutive Ones
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int maxConsecutiveOnes(const vector<int>& a) {
    int best = 0, cur = 0;
    for (int x : a) {
        cur = (x == 1) ? cur + 1 : 0;
        best = max(best, cur);
    }
    return best;
}

int main() {
    vector<int> a = {1, 1, 0, 1, 1, 1, 0, 1};
    cout << "Max consecutive ones: " << maxConsecutiveOnes(a) << "\n";
}
