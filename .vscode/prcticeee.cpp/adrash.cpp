#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void reorderLinkedList(ListNode* head) {
    if (!head || !head->next || !head->next->next) {
        return;
    }

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    
    while (head) {
        cout << head->val<<" " ;
        head = head->next;
    }
    cout<< endl;
}

int main() {
    int n;
    cin >> n;

    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        current->next = new ListNode(val);
        current = current->next;
    }

    reorderLinkedList(dummy->next);

    return 0;
}
