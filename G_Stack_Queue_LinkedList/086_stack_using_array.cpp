// 86. Implement Stack Using Array
// Time: O(1) per op, Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

class Stack {
    static const int MAX = 100;
    int arr[MAX], topIdx = -1;

public:
    bool isEmpty() const { return topIdx == -1; }
    bool isFull() const { return topIdx == MAX - 1; }
    void push(int x) {
        if (isFull()) { cout << "Stack Overflow\n"; return; }
        arr[++topIdx] = x;
    }
    int pop() {
        if (isEmpty()) { cout << "Stack Underflow\n"; return -1; }
        return arr[topIdx--];
    }
    int peek() const { return isEmpty() ? -1 : arr[topIdx]; }
    int size() const { return topIdx + 1; }
};

int main() {
    Stack s;
    s.push(10); s.push(20); s.push(30);
    cout << "Top: " << s.peek() << ", Size: " << s.size() << "\n";
    cout << "Pop: " << s.pop() << "\n";
    cout << "Pop: " << s.pop() << "\n";
    cout << "Top: " << s.peek() << "\n";
}
