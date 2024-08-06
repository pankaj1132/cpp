#include <iostream>
#include <climits>
#include<cstring>
using namespace std;
void stringrotate(char *a , int  n){
   int len = strlen(a);
   for (int i = len -1; i>=0; i--)
   {
      a[i+n]=a[i];
   }
   int j= len;
   for (int i = 0; i < n; i++)
   {
      a[i]=a[j];
      j++;
   }
   a[len]='\0';
   
   
}

int main(){
   char a[100]= "coding";
   stringrotate(a,4);
   cout<<a<<endl;


   
   return 0;
}