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
int lengthLL(node *head)
{
   int ans = 0;
   while (head)
   {
      /* code */ head = head->next;
      ans++;
   }
   return ans;
}
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
void deleteatfront(node *&head, node *&tail)
{
   if (!head)
   {
      return;
   }
   else if (!head->next)
   {
      /* code */ delete head;
      head = tail = NULL;
   }
   else
   {
      node *temp = head;
      head = head->next;
      delete temp;
   }
}
void deleteatend(node *&head, node *&tail)
{
   if (!head)
   {
      return;
   }
   else if (!head->next)
   {
      /* code */ delete head;
      head = tail = NULL;
   }
   else
   {
      node *temp = head;
      while (temp->next != tail)
      {
         /* code */ temp = temp->next;
      }
      delete tail;
      temp->next = NULL;
      tail = temp;
   }
}
void deleteatmid(node *&head, node *&tail, int pos)
{
   if (pos == 0)
   {
      /* code */ deleteatfront(head, tail);
   }
   else if (pos >= lengthLL(head) - 1)
   {
      deleteatend(head, tail);
   }
   else
   {
      node *temp = head;
      for (int i = 1; i < pos; i++)
      {
         /* code */ temp = temp->next;
      }
      node *n = temp->next;
      temp->next = n->next;
      delete n;
   }
}
void bubblesort(node *&head)
{
   int len = lengthLL(head);
   for (int i = 0; i < len - 1; i++)
   {
      /* code */ node *c = head, *p = NULL, *n;
      while (c != NULL and c->next != NULL)
      {
         /* code */ n = c->next;
         if (c->data > n->data)
         {
            /* code */ if (p == NULL)
            {
               // {head change higa
               /* code */ c->next = n->next;
               n->next = c;
               p = head;
            }
            else
            {
               // head change nhihoga
               c->next = n->next;
               n->next = c;
               p->next = n;
               p = n;
            }
         }
         else
         {
            // swapping nhi hogi
            p = c;
            c = n;
         }
      }
   }
}

void breakcycle(node *head , node *f){
   node *s= head ;
   node *p = head ;
   while (p -> next !=f)
   {
      /* code */p = p->next ;
   }
   while (s != f)
   {
      /* code */p=f;
      f= f->next ;
      s=s->next;
   }
   
   
}
bool iscyclic(node *head)
{
   node *f = head, *s = head;
   while (f and f->next)
   {
      /* code */ f = f->next->next;
      s = s->next;
      if (f == s)
      {
         breakcycle(head, f);
         /* code */ return true;
      }
   }
   return false;
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
void vreatecycle(node *head)
{
   node *temp = head;
   while (temp->next != NULL)
   {
      /* code */ temp = temp->next;
   }
   temp->next = head->next->next;
}
int main()
{
   node *head, *tail;
   head = tail = NULL;
   insertatend(head, tail, 1);
   insertatend(head, tail, 3);
   insertatend(head, tail, 4);
   insertatend(head, tail, 9);
   insertatend(head, tail, 2);
   vreatecycle(head);
   //  deleteatmid(head, tail,3);
   //  bubblesort(head);
   if (iscyclic(head))
   {
      /* code */ cout << "cylce exist";
   }

   else
      printLL(head);

   return 0;
}