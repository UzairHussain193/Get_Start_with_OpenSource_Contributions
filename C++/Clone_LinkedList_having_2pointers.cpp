#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int value) {
        val = value;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomLinkedList(Node* head) {
    Node* current = head;
    // Step 1: Create new nodes and insert them between the original nodes.
    while (current != NULL) {
        Node* newNode = new Node(current->val);
        newNode->next = current->next;
        current->next = newNode;
        current = current->next->next;
    }
    // Step 2: Copy the random pointers.
    Node* iterator = head;
    while (iterator != NULL) {
        if (iterator->random != NULL)
            iterator->next->random = iterator->random->next;
        iterator = iterator->next->next;
    }
    // Step 3: Separate the original and copied lists.
    Node* dummy = new Node(0);
    iterator = head;
    current = dummy;
    Node* fast;
    while (iterator != NULL) {
        fast = iterator->next->next;
        current->next = iterator->next;
        iterator->next = fast;
        current = current->next;
        iterator = fast;
    }
    return dummy->next;
}

void printLinkedList(Node* head) {
    while (head != NULL) {
        cout << head->val << ':';
        head->next != NULL ? cout << head->next->val : cout << "NULL";
        head->random != NULL ? cout << "," << head->random->val : cout << ",NULL";
        cout << endl;
        head = head->next;
    }
}

int main() {
    Node* head = NULL;

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);

    head = node1;
    head->next = node2;
    head->next->next = node3;
    head->next->next->next = node4;

    head->random = node4;
    head->next->random = node1;
    head->next->next->random = NULL;
    head->next->next->next->random = node2;

    cout << "Original list:(current node:node pointed by next pointer,node pointed by random pointer)\n";
    printLinkedList(head);

    cout << "Copy list:(current node:node pointed by next pointer,node pointed by random pointer)\n";
    Node* newHead = copyRandomLinkedList(head);
    printLinkedList(newHead);
    return 0;
}
