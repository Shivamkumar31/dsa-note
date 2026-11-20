// 32. Check Whether a String is a Rotation of Another String
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool isRotation(const string& a, const string& b) {
    return a.size() == b.size() && (a + a).find(b) != string::npos;
}

int main() {
    cout << boolalpha << isRotation("ABCD", "CDAB") << " " << isRotation("ABCD", "ACBD") << "\n";
}
