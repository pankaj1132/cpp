#include<iostream>
using namespace std;
struct node
{   public:
    node *next;
	int data;
};

void addnode(node *head)
{   node *nodeptr;
	nodeptr=new node();
	cin>>nodeptr->data;
	nodeptr->next=head;
	head=nodeptr;
}
void addatend(node *head)
{
    if(head==NULL)
    {
        addnode(head);
    }
    else
    {
        node *temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new node();
    }
}
void evenafterodd(node *head)
{  node *temp=head;
    node *prev;
	while(temp!=NULL)
	{   prev->next=temp; 
		if((temp->data)%2!=0)
	      {
			  prev->next=temp->next;
			  temp->next=head;
			  head=temp;
		  }
		temp=temp->next;
	}
}
void printnode(node *head)
{
	node *x;
	 while(x!=NULL)
	  {   cout<<x->data<<" ";
		  x=x->next;
	  }
}
int main() {
	int n;
	node *head=NULL;
	cin>>n;
	addatend(head);
	evenafterodd(head);
	printnode(head);
	return 0;
}