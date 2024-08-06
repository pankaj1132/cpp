#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class stack {
   vector <int > v;
   public :
   void push (int d){
      v.push_back(d);
   }
   void pop(){
      v.pop_back();
   }
   int top(){
      return v[v.size() - 1];
   }
   bool empty(){
      return v.size ()==0;
   }

};
int main(){
   stack s;
   s.push (1);
   s.push (2);
   s.push (3);
   while (!s.empty ())
   {
      /* code */cout<<s.top()<<"";
      s.pop();
   }
   
   return 0;
}