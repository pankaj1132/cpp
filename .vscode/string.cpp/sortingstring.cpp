#include <iostream>
#include <climits>
#include<algorithm>
using namespace std;
bool comp(string a, string b){
   return a>b
;}
int main(){
   string s[]={"helllo","wolrd", "coding", "block","string"};
   int n=5 ;
   sort(s,s+n,comp);
   for (int i = 0; i < n; i++)
   {
      /* code */cout<< s[i]<<endl;
   }
   
   
   return 0;
}