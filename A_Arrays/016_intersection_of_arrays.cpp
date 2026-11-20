// 16. Find the Intersection of Two Arrays
// Time: O(n log n + m log m), Space: O(1) extra

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> intersection(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> r;
    size_t i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) { r.push_back(a[i]); i++; j++; }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    return r;
}

int main() {
    vector<int> a = {1, 2, 2, 1, 3}, b = {2, 2, 3, 4};
    show(intersection(a, b));  // 2 2 3
}
