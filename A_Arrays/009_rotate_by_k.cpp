// 9. Rotate Array by K Positions (Left)
// Time: O(n), Space: O(1) - reversal algorithm

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

void rotateByK(vector<int>& a, int k) {
    int n = a.size();
    if (n == 0) return;
    k %= n;
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
    reverse(a.begin(), a.end());
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    rotateByK(a, 3);
    show(a);  // 4 5 6 7 1 2 3
}
