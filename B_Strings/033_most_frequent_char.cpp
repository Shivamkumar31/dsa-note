// 33. Find the Most Frequent Character
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

char mostFrequent(const string& s) {
    int cnt[256] = {0};
    for (unsigned char c : s) cnt[c]++;
    char best = s[0];
    for (unsigned char c : s)  // first char in string order wins ties
        if (cnt[c] > cnt[(unsigned char)best]) best = c;
    return best;
}

int main() {
    string s = "success";
    char c = mostFrequent(s);
    cout << "Most frequent: " << c << "\n";  // s
}
