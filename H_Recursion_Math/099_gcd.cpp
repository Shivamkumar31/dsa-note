// 99. Find GCD of Two Numbers (Euclid)
// Time: O(log min(a,b)), Space: O(log) stack

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    cout << "GCD(48, 18) = " << gcd(48, 18) << "\n";  // 6
    cout << "GCD(17, 5) = " << gcd(17, 5) << "\n";    // 1
    cout << "LCM(12, 18) = " << 12LL * 18 / gcd(12, 18) << "\n";  // 36
}
