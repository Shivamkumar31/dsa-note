// 91. Next Greater Element
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

vector<int> nextGreater(const vector<int>& a) {
    int n = a.size();
    vector<int> r(n, -1);
    stack<int> st;  // values, decreasing from bottom to top
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= a[i]) st.pop();
        if (!st.empty()) r[i] = st.top();
        st.push(a[i]);
    }
    return r;
}

int main() {
    vector<int> a = {4, 5, 2, 25};
    show(nextGreater(a));  // 5 25 25 -1
}
