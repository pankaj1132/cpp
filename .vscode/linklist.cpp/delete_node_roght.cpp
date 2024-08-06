#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int value){
        val = value;
        next = NULL;
    }
};

void push_front(Node** &head, int new_val){
    Node* new_node = new Node(new_val);
    new_node->next = *head;
    *head = new_node;
}

void printList(Node* head){
    Node* i = head;
    while(i){
        cout<<i->val<<" ";
        i = i->next;
    }
    cout<<"\n";
}


Node* reverse_it(Node* head){
    Node *prev = NULL;
    Node *curr = head, *next;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void del_gr_right(Node** head){
    // reverse the linked list
    *head  = reverse_it(*head);

    int mx = (*head)->val;
    Node* prev = *head;
     Node* curr = (*head)->next;

    while(curr != NULL){
        if(curr->val < mx){
            // delete curr node
            Node* temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete temp;
        } else {
            mx = max(mx, curr->val);
            prev = curr;
            curr = curr->next;
        }
    }
    // once again reverse it
    *head  = reverse_it(*head);
}

int main(){
    Node* head = NULL;

   int n ;
   cin >>n;
   for(int i =0 ; i<n; i++){
	   int data;
	   cin >>data;
       push_front(Node* head , data);
	   
   }

    printList(head);
 

    del_gr_right(&head);

    printList(head);
	return 0;
    
}