// 19. Rearrange Array Elements by Sign (alternate +/-)
// Time: O(n), Space: O(n) - equal count of +ve and -ve assumed

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> rearrangeBySign(const vector<int>& a) {
    vector<int> r(a.size());
    int pos = 0, neg = 1;
    for (int x : a) {
        if (x >= 0) { r[pos] = x; pos += 2; }
        else        { r[neg] = x; neg += 2; }
    }
    return r;
}

int main() {
    vector<int> a = {3, 1, -2, -5, 2, -4};
    show(rearrangeBySign(a));  // 3 -2 1 -5 2 -4
}
