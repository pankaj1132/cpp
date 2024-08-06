#include <iostream>
using namespace std ;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) {
        val = value;
        next = nullptr;
    }
};

int binaryToDecimal(ListNode* head) {
    int decimalValue = 0;
    ListNode* current = head;

    while (current != nullptr) {
        decimalValue = (decimalValue << 1) | current->val;
        current = current->next;
    }

    return decimalValue;
}

int main() {
    int N;
    cin >> N;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        ListNode* newNode = new ListNode(value);
        
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int result = binaryToDecimal(head);
    cout << result << endl;

    // Free the allocated memory to prevent memory leaks
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

return 0;
}