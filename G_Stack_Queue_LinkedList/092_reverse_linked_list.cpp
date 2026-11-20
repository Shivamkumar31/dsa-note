// 92. Reverse a Linked List
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


Node* reverseList(Node* head) {
    Node *prev = nullptr, *cur = head;
    while (cur) {
        Node* nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}

int main() {
    Node* head = build({1, 2, 3, 4, 5});
    printList(head);
    head = reverseList(head);
    printList(head);
    freeList(head);
}
