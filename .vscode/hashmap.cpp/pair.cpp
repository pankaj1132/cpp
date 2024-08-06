#include <bits/stdc++.h>

using namespace std;
template<typename T ,typename U>
class Pair{
   public:
   T first ;
   U second;

};
int main(){
   // pair<int , string >p;
   // insertion ka first way 
   // p.first = 10;
   // p.second ="hello";

   // second __Way
   // pair<int,string>p(10,"hello");
   // 3rd __Way 
   // pair<int , string >p(make_pair(10,"hello"));
   // insertion at _FORth 
   // pair<int , string >p({10,"hello"});
   // insertion ka 5 way 
   pair <int , string >p;
   p={10,"hello"};
   cout<<p.first <<p.second;




   
   return 0;
}