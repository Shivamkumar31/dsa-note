// 75. Maximum Number of Vowels in a Substring of Given Length
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

bool isVowel(char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }

int maxVowels(const string& s, int k) {
    int cur = 0, best = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        cur += isVowel(s[i]);
        if (i >= k) cur -= isVowel(s[i - k]);
        best = max(best, cur);
    }
    return best;
}

int main() {
    cout << maxVowels("abciiidef", 3) << "\n";  // 3
}
