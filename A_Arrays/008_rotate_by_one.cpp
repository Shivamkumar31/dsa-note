// 8. Rotate Array by One Position (Left)
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

void rotateByOne(vector<int>& a) {
    if (a.empty()) return;
    int first = a[0];
    for (size_t i = 1; i < a.size(); i++) a[i - 1] = a[i];
    a.back() = first;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    rotateByOne(a);
    show(a);  // 2 3 4 5 1
}
