// 24. Count Vowels and Consonants
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

void countVC(const string& s, int& vowels, int& consonants) {
    vowels = consonants = 0;
    for (char c : s) {
        if (!isalpha((unsigned char)c)) continue;
        char l = tolower(c);
        if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') vowels++;
        else consonants++;
    }
}

int main() {
    int v, c;
    countVC("Hello World", v, c);
    cout << "Vowels: " << v << ", Consonants: " << c << "\n";
}
