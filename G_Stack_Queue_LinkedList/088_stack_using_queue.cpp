// 88. Implement Stack Using Queue (single queue)
// Time: push O(n), pop O(1), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

class MyStack {
    queue<int> q;

public:
    void push(int x) {
        q.push(x);
        for (int i = 0; i < (int)q.size() - 1; i++) {  // rotate so x is at front
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        if (q.empty()) return -1;
        int v = q.front();
        q.pop();
        return v;
    }
    int top() const { return q.empty() ? -1 : q.front(); }
    bool empty() const { return q.empty(); }
};

int main() {
    MyStack s;
    s.push(1); s.push(2); s.push(3);
    cout << "Top: " << s.top() << "\n";  // 3
    cout << "Pop: " << s.pop() << "\n";  // 3
    cout << "Pop: " << s.pop() << "\n";  // 2
}
