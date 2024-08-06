#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* partition(ListNode* head, int x) {
    ListNode lessThanXDummy(0); // Dummy node for nodes less than x
    ListNode greaterThanOrEqualXDummy(0); // Dummy node for nodes greater than or equal to x
    ListNode* lessThanX = &lessThanXDummy;
    ListNode* greaterThanOrEqualX = &greaterThanOrEqualXDummy;

    while (head) {
        if (head->val < x) {
            lessThanX->next = head;
            lessThanX = lessThanX->next;
        } else {
            greaterThanOrEqualX->next = head;
            greaterThanOrEqualX = greaterThanOrEqualX->next;
        }
        head = head->next;
    }

    lessThanX->next = greaterThanOrEqualXDummy.next;
    greaterThanOrEqualX->next = nullptr;

    return lessThanXDummy.next;
}

void printLinkedList(ListNode* head) {
    while (head) {
     cout << head->val << " ";
        head = head->next;
    }
    cout << std::endl;
}

int main() {
    int n, x;
    cin >> n >> x;

    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        current->next = new ListNode(val);
        current = current->next;
    }

    ListNode* partitionedHead = partition(dummy->next, x);
    printLinkedList(partitionedHead);

    return 0;
}
