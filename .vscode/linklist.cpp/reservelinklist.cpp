#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertatfront(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *n = new node(data);
        head = tail = n;
    }
    else
    {
        node *n = new node(data);
        n->next = head;
        head = n;
    }
}
void reverse(node*& head , node *&tail){
   node* c = head , *p= NULL;
   node *n;
   while (c)
   {
      /* code */n= c->next;
      c->next = p;
      p=c;
      c=n;
   }
   swap(head, tail);
   
}
void reverseLLREC(node * head , node *p=NULL){
   // bas ecase
   if (head== NULL)
   {
      /* code */return;
   }
   node *n = head -> next ;
   head -> next =p;
   reverseLLREC(n,head);
}
void printLL(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -->";
        head = head->next;
    }
    cout << "NULL\n";
}
int main()
{
    node *head, *tail;
    head = tail = NULL;
    insertatfront(head, tail, 1);
    insertatfront(head, tail, 2);
    insertatfront(head, tail, 3);
    insertatfront(head, tail, 4);
    insertatfront(head, tail, 5);
   //  reverse(head, tail);
    reverseLLREC(head);
    swap(head ,tail);
    printLL(head);
   
return 0;
}