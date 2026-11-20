// 74. Fruit Into Baskets
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int totalFruit(const vector<int>& fruits) {
    unordered_map<int, int> basket;
    int left = 0, best = 0;
    for (int r = 0; r < (int)fruits.size(); r++) {
        basket[fruits[r]]++;
        while (basket.size() > 2) {
            if (--basket[fruits[left]] == 0) basket.erase(fruits[left]);
            left++;
        }
        best = max(best, r - left + 1);
    }
    return best;
}

int main() {
    vector<int> f = {1, 2, 3, 2, 2};
    cout << totalFruit(f) << "\n";  // 4
}
