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

// Function to merge two sorted linked lists
Node* mergeSortedLists(Node* list1, Node* list2) {
    if (list1 == nullptr) {
        return list2;
    }
    if (list2 == nullptr) {
        return list1;
    }

    Node* mergedList = nullptr;
    Node* tail = nullptr;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->data <= list2->data) {
            if (mergedList == nullptr) {
                mergedList = list1;
                tail = list1;
            } else {
                tail->next = list1;
                tail = list1;
            }
            list1 = list1->next;
        } else {
            if (mergedList == nullptr) {
                mergedList = list2;
                tail = list2;
            } else {
                tail->next = list2;
                tail = list2;
            }
            list2 = list2->next;
        }
    }

    if (list1 != nullptr) {
        tail->next = list1;
    }
    if (list2 != nullptr) {
        tail->next = list2;
    }

    return mergedList;
}

// Function to print the merged linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << std::endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N1, N2;
        cin >> N1;
        Node* list1 = nullptr;
        Node* tail1 = nullptr;

        for (int i = 0; i < N1; i++) {
            int data;
            cin >> data;
            Node* newNode = new Node(data);
            if (list1 == nullptr) {
                list1 = newNode;
                tail1 = newNode;
            } else {
                tail1->next = newNode;
                tail1 = newNode;
            }
        }

        cin >> N2;
        Node* list2 = nullptr;
        Node* tail2 = nullptr;

        for (int i = 0; i < N2; i++) {
            int data;
            cin >> data;
            Node* newNode = new Node(data);
            if (list2 == nullptr) {
                list2 = newNode;
                tail2 = newNode;
            } else {
                tail2->next = newNode;
                tail2 = newNode;
            }
        }

        Node* mergedList = mergeSortedLists(list1, list2);
        printList(mergedList);

        // Clean up memory (free the nodes)
        while (mergedList != nullptr) {
            Node* temp = mergedList;
            mergedList = mergedList->next;
            delete temp;
        }
    }

return 0;
}