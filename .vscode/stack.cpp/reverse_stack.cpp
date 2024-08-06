#include <bits/stdc++.h>

using namespace std;
void insertatbottom (stack <int >&s, int top){
   if (s.empty())
   {
      /* code */s.push(top);
      return;
   }
   // recursive case
   int ct=s.top();
   s.pop();
   insertatbottom(s,top);
   s.push(ct);

   
}

void reversestack(stack<int >&s){
   // base case 
   if (s.empty())
   {
      /* code */return;
   }
   int top= s.top();
   s.pop();
   reversestack(s);
   insertatbottom(s,top);
   
}
void printstack(stack<int> s ){
     while (!s.empty ())
   {
      /* code */cout<<s.top()<<"";
      s.pop();
   }

}

int main(){
   stack<int > s;
   s.push (1);
   s.push (2);
   s.push (3);
   reversestack(s);
   printstack(s);
  

   
   return 0;
}