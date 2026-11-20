// 6. Remove Duplicates from a Sorted Array
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int removeDuplicates(vector<int>& a) {
    if (a.empty()) return 0;
    int k = 1;
    for (size_t i = 1; i < a.size(); i++)
        if (a[i] != a[k - 1]) a[k++] = a[i];
    return k;  // new length
}

int main() {
    vector<int> a = {1, 1, 2, 2, 2, 3, 4, 4};
    int k = removeDuplicates(a);
    a.resize(k);
    cout << "Length: " << k << "\nArray: ";
    show(a);
}
