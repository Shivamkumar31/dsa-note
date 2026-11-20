// 31. Reverse Words in a String
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

string reverseWords(const string& s) {
    stringstream ss(s);
    vector<string> w;
    string t;
    while (ss >> t) w.push_back(t);
    reverse(w.begin(), w.end());
    string r;
    for (size_t i = 0; i < w.size(); i++) r += (i ? " " : "") + w[i];
    return r;
}

int main() {
    cout << reverseWords("  the sky  is blue ") << "\n";  // blue is sky the
}
