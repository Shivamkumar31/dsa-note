// 52. Remove Duplicates from Sorted Array Using Two Pointers
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int removeDuplicates(vector<int>& a) {
    if (a.empty()) return 0;
    int slow = 0;
    for (int fast = 1; fast < (int)a.size(); fast++)
        if (a[fast] != a[slow]) a[++slow] = a[fast];
    return slow + 1;
}

int main() {
    vector<int> a = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(a);
    a.resize(k);
    show(a);
}
