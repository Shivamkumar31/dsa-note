// 49. Find Common Elements in Three Arrays
// Time: O(n1+n2+n3), Space: O(n1+n2)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> commonElements(const vector<int>& a, const vector<int>& b, const vector<int>& c) {
    unordered_set<int> sa(a.begin(), a.end()), sb(b.begin(), b.end());
    set<int> r;
    for (int x : c) if (sa.count(x) && sb.count(x)) r.insert(x);
    return vector<int>(r.begin(), r.end());
}

int main() {
    show(commonElements({1, 5, 10, 20, 40, 80}, {6, 7, 20, 80, 100}, {3, 4, 15, 20, 30, 70, 80, 120}));
    // 20 80
}
