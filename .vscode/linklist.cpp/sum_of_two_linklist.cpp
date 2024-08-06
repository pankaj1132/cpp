#include <bits/stdc++.h>
using namespace std;
class node {
   public:
   int data;
   node *next ;
   node(int d){
      data=d;
      next=NULL;
   }
};
void insertatfront(node*&head,int data){
   if (!head)
   {
     head=new node (data);

   }
   else
   {
      node *n = new node (data);
      n->next=head ;
      head = n;
   }
   
   
}
node *addtwoll(node * head1 , node *head2){
   int carry =0;
   node * temp = head1 ;
   node * newll= NULL;
   while (carry!=0 || head1||head2)
   {
      int  sum =0;
      if(head1){
         sum+=head1->data;
         head1= head1->next;

      }
      if(head2 ){
         sum+=head2->data;
         head2=head2->next;
      }
      sum+=carry;
      if (sum<10)
      {
       insertatfront(newll,sum);
      }
      else
      {
         int ld = sum %10;
         insertatfront(newll,ld);
         carry=sum/10;
      }
      
   }
   return newll;
}
   
    

int main(){
   int n , m ;
   cin>>n >>m ;
   node *head1=NULL, *head2=NULL;
   for (int i = 0; i < n; i++)
   {
      int data;
      cin>>data;
      insertatfront(head1,data);
   }
   for (int i = 0; i < m; i++)
   {
      int data;
      cin>>data;
      insertatfront(head2,data);
   }
   node * newll = addtwoll(head1,head2);
   while (newll)
   {
      cout<<newll->data<<" ";
      newll=newll->next;
   }
   cout<<endl;
   

   
   return 0;
}