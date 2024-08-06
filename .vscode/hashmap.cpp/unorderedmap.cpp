#include <bits/stdc++.h>
using namespace std;
int main(){
  unordered_map<string, int >h;
   h.insert({"mango",100});
    h.insert({"grapes",400});
     h.insert({"kiwi",30});
      h.insert({"apple",20});
      for(auto p:h){
         cout<< p.first <<"    "<<p.second<<endl;
      }
      // auto apne aap datatype leleta h but value jaruri h 
      for(pair<string,int >p:h){
         cout<<p.first <<"  "<< p.second <<endl;
      }
      for (int i =0 ;i<h.bucket_count(); i++){
         cout<< i << "-->";
      
      for (auto it = h.begin(i);  it != h.end(i);it++)
      {
         cout<<"["<<it->first<<":"<<it->second<<"]";
      }
      cout<<endl;
      }

      
   return 0;
}