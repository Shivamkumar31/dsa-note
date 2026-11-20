// 2. Find the Second Largest Element in an Array
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int secondLargest(const vector<int>& a) {
    long long first = LLONG_MIN, second = LLONG_MIN;
    for (int x : a) {
        if (x > first) { second = first; first = x; }
        else if (x < first && x > second) second = x;
    }
    return second == LLONG_MIN ? -1 : (int)second;  // -1 if not present
}

int main() {
    vector<int> a = {10, 5, 20, 8, 20};
    cout << "Second largest: " << secondLargest(a) << "\n";
}
