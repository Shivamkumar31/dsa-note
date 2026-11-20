// 87. Implement Queue Using Array (circular)
// Time: O(1) per op, Space: O(n)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

class Queue {
    static const int MAX = 100;
    int arr[MAX], front = 0, cnt = 0;

public:
    bool isEmpty() const { return cnt == 0; }
    bool isFull() const { return cnt == MAX; }
    void enqueue(int x) {
        if (isFull()) { cout << "Queue Overflow\n"; return; }
        arr[(front + cnt) % MAX] = x;
        cnt++;
    }
    int dequeue() {
        if (isEmpty()) { cout << "Queue Underflow\n"; return -1; }
        int v = arr[front];
        front = (front + 1) % MAX;
        cnt--;
        return v;
    }
    int peek() const { return isEmpty() ? -1 : arr[front]; }
    int size() const { return cnt; }
};

int main() {
    Queue q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    cout << "Front: " << q.peek() << ", Size: " << q.size() << "\n";
    cout << "Dequeue: " << q.dequeue() << "\n";
    cout << "Dequeue: " << q.dequeue() << "\n";
    cout << "Front: " << q.peek() << "\n";
}
