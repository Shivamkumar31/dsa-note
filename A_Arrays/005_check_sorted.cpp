// 5. Check if an Array is Sorted
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool isSorted(const vector<int>& a) {
    for (size_t i = 1; i < a.size(); i++)
        if (a[i] < a[i - 1]) return false;
    return true;
}

int main() {
    vector<int> a = {1, 2, 2, 5, 9}, b = {3, 1, 2};
    cout << boolalpha << isSorted(a) << " " << isSorted(b) << "\n";
}
