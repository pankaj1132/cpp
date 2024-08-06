#include <iostream>
#include <climits>
using namespace std;
int main(){
   string s[5]={"hello","cat","world "};
   // for (int i = 0; i < 3; i++)
   // {
   //    /* code */cout << s[i];
   // }cout << endl;
   // for (int i = 0; i < 3; i++)
   // {
   //    /* code */for (int j= 0; j <s[j].size(); i++)
   //    {
   //       /* code */cout<<s[i][j]<<" ";
   //    }cout<<endl;
      
   // }
   string lar="";
   for (int i = 0; i < 3; i++)
   {
      /* code */if (s[i].size()>lar.size())
      {
         /* code */lar =s[i];
      }
      
   }cout<< lar<<endl;
   
   
   
   
   return 0;
}