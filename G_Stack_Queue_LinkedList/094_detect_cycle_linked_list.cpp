// 94. Detect a Cycle in a Linked List (Floyd's)
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

template <class T> void show(const vector<T>& v) {
    for (const auto& x : v) cout << x << " ";
    cout << "\n";
}

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

Node* build(const vector<int>& v) {
    Node dummy(0);
    Node* t = &dummy;
    for (int x : v) { t->next = new Node(x); t = t->next; }
    return dummy.next;
}

void printList(Node* h) {
    for (; h; h = h->next) cout << h->val << (h->next ? " -> " : "");
    cout << "\n";
}

void freeList(Node* h) {
    while (h) { Node* n = h->next; delete h; h = n; }
}


bool hasCycle(Node* head) {
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

int main() {
    Node* head = build({1, 2, 3, 4, 5});
    cout << boolalpha << "Cycle: " << hasCycle(head) << "\n";  // false

    Node* tail = head;
    while (tail->next) tail = tail->next;
    tail->next = head->next;  // create cycle 5 -> 2
    cout << "Cycle: " << hasCycle(head) << "\n";  // true

    tail->next = nullptr;  // break cycle so we can free memory
    freeList(head);
}
