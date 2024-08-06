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
    printLL(head);
    printLL(head);

return 0;
}