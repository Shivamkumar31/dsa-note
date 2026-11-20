// 100. Calculate Power of a Number Using Recursion (fast exponentiation)
// Time: O(log n), Space: O(log n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

double power(double x, long long n) {
    if (n == 0) return 1.0;
    if (n < 0) return 1.0 / power(x, -n);
    double half = power(x, n / 2);
    return n % 2 == 0 ? half * half : half * half * x;
}

int main() {
    cout << "2^10 = " << power(2, 10) << "\n";    // 1024
    cout << "2^-2 = " << power(2, -2) << "\n";    // 0.25
    cout << "3^5 = " << power(3, 5) << "\n";      // 243
}
