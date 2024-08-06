#include<iostream>
using namespace std;
void permutation(char *a , int i){
   if (a[i]=='\0')
   {
      /* code */cout<<a<<endl;   
      }
      for (int j = i; a[j] != '\0' ; j++)
      {
         /* code */swap(a[i], a[j]);
         permutation(a, i+1);
         swap(a[i], a[j]);

      }
      
   
}
int main(){
   char a[]= "abc";
   permutation(a,0);
   
   return 0;
}