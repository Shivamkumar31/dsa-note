// 96. Calculate Factorial Using Recursion
// Time: O(n), Space: O(n) stack

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    for (int n : {0, 5, 10, 20}) cout << n << "! = " << factorial(n) << "\n";
}
