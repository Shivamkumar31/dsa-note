// 53. Move Zeros to the End Using Two Pointers
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

void moveZeros(vector<int>& a) {
    int slow = 0;
    for (int fast = 0; fast < (int)a.size(); fast++)
        if (a[fast] != 0) swap(a[slow++], a[fast]);
}

int main() {
    vector<int> a = {0, 1, 0, 3, 12};
    moveZeros(a);
    show(a);  // 1 3 12 0 0
}
