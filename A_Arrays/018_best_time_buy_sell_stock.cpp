// 18. Best Time to Buy and Sell Stock
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

int maxProfit(const vector<int>& p) {
    int minPrice = INT_MAX, profit = 0;
    for (int x : p) {
        minPrice = min(minPrice, x);
        profit = max(profit, x - minPrice);
    }
    return profit;
}

int main() {
    vector<int> p = {7, 1, 5, 3, 6, 4};
    cout << "Max profit: " << maxProfit(p) << "\n";  // 5
}
