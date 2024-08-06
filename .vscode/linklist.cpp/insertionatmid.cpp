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
int lengthLL(node*head){
   int ans = 0;
   while (head)
   {
      /* code */head = head ->next;
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
// void insertatend(node *&head, node *&tail, int data)
// {
//     if (head == NULL)
//     {
//         node *n = new node(data);
//         head = tail = n;
//     }
//     else
//     {
//         node *n = new node(data);
//         tail->next = n;
//         tail = n;
// }
// }
// void insertatmid(node*head,node*tail,int data, int pos){
//    if (pos>=lengthLL(head))
//    {
//       /* code */insertatend(head ,tail ,data);
//    }
//    else if (pos==0){
//        insertatend(head, tail, data);
//    }
//    else{
//       node*temp = head;
//       for (int i = 1; i < pos; i++)
//       {
//          /* code */temp= temp -> next;
//       }
//       node*n = new node (data);
//       n -> next = temp -> next;
//       temp -> next = n;
      
//    }

   
// }
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
 
    insertatfront(head, tail, 2);
    insertatfront(head, tail, 3);
    insertatfront(head, tail, 4);
    insertatfront(head, tail, 5);
   
    printLL(head);


return 0;
}