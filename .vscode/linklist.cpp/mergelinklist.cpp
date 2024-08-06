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
void insertatend(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *n = new node(data);
        head = tail = n;
    }
    else
    {
        node *n = new node(data);
        tail->next = n;
        tail = n;
}
}

node * merge (node*a , node * b ){
   // base case
   if ( a == NULL)
   {
      /* code */return b;
   }
   if (b== NULL)
   {
      /* code */return a ;
   }
   node * nH;
   if (a-> data < b -> data)
   {
      /* code */nH=a;
      nH->next =  merge (a->next , b);
   }
  else
   {
      /* code */nH=b;
      nH->next =  merge (a , b->next);
   }
   return nH;
   
   

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
    node *head, *tail, *head1, *tail1;

    head = tail = head1 = tail1 = NULL;
    insertatend(head, tail, 1);
    insertatend(head, tail, 3);
    insertatend(head, tail, 5);
    insertatend(head, tail, 6);
    insertatend(head, tail, 8);
     insertatend(head1, tail1, 2);
    insertatend(head1, tail1, 4);
    insertatend(head1, tail1, 7);
    insertatend(head1, tail1, 9);
   
    head = merge(head ,head1 );
   
    
    printLL(head);

return 0;
}