// 93. Find the Middle of a Linked List
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


Node* middle(Node* head) {  // second middle for even length
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    Node* a = build({1, 2, 3, 4, 5});
    Node* b = build({1, 2, 3, 4, 5, 6});
    cout << "Middle: " << middle(a)->val << "\n";  // 3
    cout << "Middle: " << middle(b)->val << "\n";  // 4
    freeList(a); freeList(b);
}
