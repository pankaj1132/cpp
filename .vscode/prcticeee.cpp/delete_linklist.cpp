#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to delete nodes with greater values on their right side
ListNode* deleteNodesWithGreaterValues(ListNode* head) {
    if (!head || !head->next) {
        return head; // Nothing to delete if there are 0 or 1 nodes
    }
    
    ListNode* current = head;
    ListNode* prev = nullptr;
    int maxSoFar = head->val; // Initialize with the value of the first node
    
    while (current && current->next) {
        if (current->next->val > maxSoFar) {
            maxSoFar = current->next->val; // Update the maximum value
            prev = current; // Move prev to the current node
            current = current->next; // Move current to the next node
        } else {
            // Delete the node with a lesser value
            if (!prev) {
                head = current->next;
                delete current;
                current = head;
            } else {
                prev->next = current->next;
                delete current;
                current = prev->next;
            }
        }
    }
    
    return head;
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Original Linked List: ";
    printList(head);

    head = deleteNodesWithGreaterValues(head);

    cout << "Modified Linked List: ";
    printList(head);

    return 0;
}
