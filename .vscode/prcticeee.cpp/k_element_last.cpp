#include <iostream>
using namespace std ; 


class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int findKthFromEnd(Node* head, int k) {
    Node* slow = head;
    Node* fast = head;

    // Move the fast pointer k positions ahead
    for (int i = 0; i < k; i++) {
        if (fast == nullptr) {
            // If k is greater than the number of nodes, return -1
            return -1;
        }
        fast = fast->next;
    }

    // Move both slow and fast pointers until the fast pointer reaches the end
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow->data;
}

int main() {
    int data;
    Node* list = nullptr;
    Node* tail = nullptr;

    while (true) {
        cin >> data;
        if (data == -1) {
            break;
        }

        Node* newNode = new Node(data);
        if (list == nullptr) {
            list = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int k;
cin >> k;

    int result = findKthFromEnd(list, k);
cout << result << endl;

return 0;
}
