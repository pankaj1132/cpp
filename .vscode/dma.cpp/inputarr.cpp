#include <iostream>
#include <climits>
using namespace std;
int main(){
   int *a;
   int n ;
   cin>>n;
   a= new int [n];
   for (int i = 0; i < n; i++)
   {
      /* code */a[i]=i+1;
   }
   delete [] a;
 a =NULL;
   for (int i = 0; i <n; i++)
   {
      /* code */cout<<a[i]<<" ";
   }
   
   
   
   return 0;
}