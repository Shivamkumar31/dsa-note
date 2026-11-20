// 85. Quick Sort
// Time: O(n log n) avg, O(n^2) worst, Space: O(log n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int partitionArr(vector<int>& a, int low, int high) {
    int pivot = a[high], i = low - 1;
    for (int j = low; j < high; j++)
        if (a[j] < pivot) swap(a[++i], a[j]);
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(vector<int>& a, int low, int high) {
    if (low >= high) return;
    int p = partitionArr(a, low, high);
    quickSort(a, low, p - 1);
    quickSort(a, p + 1, high);
}

int main() {
    vector<int> a = {10, 7, 8, 9, 1, 5};
    quickSort(a, 0, a.size() - 1);
    show(a);
}
