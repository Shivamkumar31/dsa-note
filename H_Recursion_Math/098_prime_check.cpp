// 98. Check Whether a Number is Prime
// Time: O(sqrt n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

int main() {
    for (long long n : {1LL, 2LL, 15LL, 17LL, 97LL, 1000000007LL})
        cout << n << (isPrime(n) ? " is prime\n" : " is not prime\n");
}
