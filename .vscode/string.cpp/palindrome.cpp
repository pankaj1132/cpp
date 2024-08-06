#include <iostream>
#include<cstring>
#include <climits>
using namespace std;
int ispalindrome(char *a){
   int  i=0, j = strlen(a)-1;
   while (i<j)
   {
      if(a[i]!=a[j]){
         return false;
      }
      i++;
      j--;
   }
   return true;
   
}
int main(){
   char a[100];
   int  n ;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
      /* code */cin>>a[i];
   }
   
   cout<<ispalindrome(a)<<endl;
   
   return 0;
}