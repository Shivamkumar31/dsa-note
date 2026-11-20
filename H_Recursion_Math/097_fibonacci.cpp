// 97. Generate Fibonacci Numbers
// Time: O(n) iterative / O(2^n) naive recursion, Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int fibRecursive(int n) {  // naive, for small n only
    if (n <= 1) return n;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

vector<long long> fibSeries(int n) {  // first n terms, iterative
    vector<long long> r;
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        r.push_back(a);
        long long c = a + b;
        a = b;
        b = c;
    }
    return r;
}

int main() {
    cout << "fib(10) recursive = " << fibRecursive(10) << "\n";
    show(fibSeries(15));
}
