// 7. Move All Zeros to the End
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

void moveZeros(vector<int>& a) {
    int pos = 0;
    for (size_t i = 0; i < a.size(); i++)
        if (a[i] != 0) a[pos++] = a[i];
    while (pos < (int)a.size()) a[pos++] = 0;
}

int main() {
    vector<int> a = {0, 1, 0, 3, 12, 0, 5};
    moveZeros(a);
    show(a);
}
