#include <bits/stdc++.h>
using namespace std;
class Queue{
   int *a ;
   int n ;
   int cs;
   int f , e;
   public:
   Queue(int s){
      n = s; 
       a= new int [s];
       cs= 0;
       f= 0;
       e= n-1;
   }
   void push(int d){
      if (cs <n )
      {
         /* code */e= (e+1)%n;
         a[e]=d;
         cs++;
      }
      else{
         cout<<"overflow\n";
      }
      
   }
   void pop(){
      if (cs>0)
      {
         /* code */f=(f+1)%n;
         cs--;
      }
      else{
         cout<<"overflow\n";
      }
      
   }
   int front(){
      return a[f];
   }
   bool empty(){
      return cs == 0;
   }
};
int main(){
   Queue q(5);
   q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
       while (!q.empty ())
   {
      /* code */cout<<q.front()<<"";
      q.pop();
   }
   


   
   return 0;
}