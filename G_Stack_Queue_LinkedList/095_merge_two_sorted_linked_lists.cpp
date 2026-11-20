// 95. Merge Two Sorted Linked Lists
// Time: O(n+m), Space: O(1)

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


Node* mergeLists(Node* a, Node* b) {
    Node dummy(0);
    Node* t = &dummy;
    while (a && b) {
        if (a->val <= b->val) { t->next = a; a = a->next; }
        else                  { t->next = b; b = b->next; }
        t = t->next;
    }
    t->next = a ? a : b;
    return dummy.next;
}

int main() {
    Node* a = build({1, 3, 5, 7});
    Node* b = build({2, 4, 6, 8, 10});
    Node* m = mergeLists(a, b);
    printList(m);
    freeList(m);
}
