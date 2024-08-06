#include <iostream>
#include <climits>
using namespace std;
int nstair(int n ){
   if (n==0)
   {
      /* code */return 1;

   }
   if (n<0){
      return 0;
   }
   // recurvise case
   return nstair(n-1) +nstair(n-2)+nstair(n-3);
}
int nstair1(int n, int k ){
   if (n==0)
   {
      /* code */return 1;

   }
   if (n<0){
      return 0;
   }   
   int ans=0;
   // recurvise case
   for (int i = 0; i < k; i++)
   {
      /* code */ans+=nstair1(n-i,k);
   }
   
   return ans;
}
int main(){
   cout<<nstair(4)<<endl;
   cout<<nstair1(5,3)<<endl;
   
   return 0;
}