#include <bits/stdc++.h>
using namespace std;
class cmp {
   public:
   bool operator()(int a, int b){
      return a<b;
   }
};

int main(){
   // priority queue <int>q;    maxheap
   // priority queue <int > , vector <int > , greater <int > q;
priority_queue<int ,vector<int >,less<int>> q;
q.push(1);
q.push(10);
q.push(6);
q.push(4);
q.push(2);
q.push(3);
while (!q.empty())
{
   /* code */cout<< q.top()<<"  ";
   q.pop();
}
cout<<endl;

   
   return 0;
}