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

// Function to partition and reorganize the linked list
Node* partitionLinkedList(Node* head, int x) {
    Node* lessHead = new Node(0);
    Node* lessTail = lessHead;
    Node* greaterHead = new Node(0);
    Node* greaterTail = greaterHead;

    Node* current = head;

    while (current != nullptr) {
        if (current->data < x) {
            lessTail->next = current;
            lessTail = current;
        } else {
            greaterTail->next = current;
            greaterTail = current;
        }
        current = current->next;
    }

    lessTail->next = greaterHead->next;
    greaterTail->next = nullptr;

    return lessHead->next;
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
    int N, x;
    cin >> N >> x;

    Node* list = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < N; i++) {
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

    list = partitionLinkedList(list, x);
    printList(list);
return 0;
}