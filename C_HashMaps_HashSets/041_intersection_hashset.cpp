// 41. Find the Intersection of Two Arrays Using Hash Set
// Time: O(n+m), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> intersection(const vector<int>& a, const vector<int>& b) {
    unordered_set<int> sa(a.begin(), a.end());
    vector<int> r;
    for (int x : b)
        if (sa.erase(x)) r.push_back(x);  // erase => each common value once
    return r;
}

int main() {
    show(intersection({1, 2, 2, 1}, {2, 2, 3, 1}));  // 2 1
}
