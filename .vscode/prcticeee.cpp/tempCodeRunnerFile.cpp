#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
void insertatfront(ListNode *&head,int data)
{
    if (head == NULL)
    {
        ListNode *n = new ListNode(data);
        head = n;
    }
    else
    {
     ListNode *n = new 
     ListNode(data);
        n->next = head;
        head = n;
    }
}

ListNode* partition(ListNode* head, int x) {
    ListNode less_head(0); 
    ListNode ge_head(0);   
    ListNode* less = &less_head;
    ListNode* ge = &ge_head;

    while (head) {
        if (head->val < x) {
            less->next = head;
            less = less->next;
        } else {
            ge->next = head;
            ge = ge->next;
        }
        head = head->next;
    }


    less->next = ge_head.next;
    ge->next = nullptr;

    return less_head.next;
}


void printList(ListNode* head) {
    while (head) {
        std::cout << head->val ;
        head = head->next;
    }
    cout  << endl;
}

int main() {

    ListNode* head = NULL;
    int n ;
     cin >>n ;
     int x;
     cin>>x;
     for (int i = 0; i <n; i++)
     {
         int data;
         cin>>data;
         insertatfront(head,data);
     }
     

 


  

    ListNode* partitionedHead = partition(head, x);

    
    printList(partitionedHead);

    return 0;
}
