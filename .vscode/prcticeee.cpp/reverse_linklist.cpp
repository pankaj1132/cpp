#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to reverse a linked list within a given group of k elements
Node* reverseKGroup(Node* head, int k) {
    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    int count = 0;

    // Count the number of elements in the current group
    Node* temp = head;
    while (count < k && temp != nullptr) {
        temp = temp->next;
        count++;
    }

    // If the current group has k elements, reverse it
    if (count == k) {
        while (count > 0 && current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count--;
        }

        if (next != nullptr) {
            // Recursively reverse the next group and link it to the current group
            head->next = reverseKGroup(next, k);
        }

        return prev;  // Return the new head of the reversed group
    }

    // If the group has fewer than k elements, leave it unchanged
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
     cout << head->data << " ";
        head = head->next;
    }
    cout << std::endl;
}

int main() {
    int n, k;
    cin >> n >> k;

    Node* list = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        Node* newNode = new Node(data);
        if (list == nullptr) {
            list = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    list = reverseKGroup(list, k);
    printList(list);

return 0;
}
