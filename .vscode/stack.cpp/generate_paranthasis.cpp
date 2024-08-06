#include <bits/stdc++.h>
using namespace std;
void genparanthesis(char * a, int i ,int n , int open , int close){
   // base case 
   if (i== 2*n )
   {
      a[i]='\0';
      cout<<a<<endl;
      return ;
   }
   // recursive case 
   if(open <n)
   {
      a[i]='(';
      genparanthesis(a,i+1,n , open +1 , close);
   }
   if (open > close )
{
   a[i]=')';
   genparanthesis(a, i+1,n, open , close+1);
}   
   
}
int main(){
   int n ;
   cin >>n ;
   char a[100];
   genparanthesis(a,0,n,0,0);
   return 0;
}