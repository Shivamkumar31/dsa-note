// 89. Implement Queue Using Stack (two stacks)
// Time: amortized O(1), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

class MyQueue {
    stack<int> in, out;
    void shift() {
        if (out.empty())
            while (!in.empty()) { out.push(in.top()); in.pop(); }
    }

public:
    void push(int x) { in.push(x); }
    int pop() {
        shift();
        if (out.empty()) return -1;
        int v = out.top();
        out.pop();
        return v;
    }
    int peek() { shift(); return out.empty() ? -1 : out.top(); }
    bool empty() const { return in.empty() && out.empty(); }
};

int main() {
    MyQueue q;
    q.push(1); q.push(2); q.push(3);
    cout << "Front: " << q.peek() << "\n";  // 1
    cout << "Pop: " << q.pop() << "\n";     // 1
    q.push(4);
    cout << "Pop: " << q.pop() << "\n";     // 2
}
