#include <iostream>
#include <climits>
using namespace std;
bool check7 (int *a, int  n ,int i){
   
   //  base case 
   if ( i==n ){
      return false;
   }

   if (a[i]==7){
      return true;
   }   

   return check7(a,n,i+1);
   


}

int first7(int *a, int  n ,int i){
   
   //  base case 
   if ( i==n ){
      return -1;
   }

   if (a[i]==7){
      return i;
   }   

   return first7(a,n,i+1);
   


}
int last7 (int *a, int  n ){
   
   //  base case 
   if ( n==0){
      return -1;
   }

   if (a[n-1]==7){
      return n-1;
   }   

   return last7(a,n-1);
   


}
void  all7(int *a, int n, int i){
   if (1==n){
      return  ;

   }
   if (a[i]==7){
      cout<<i<<" "
;
   }
   return all7(a,n,i+1);
}
int main(){
   int  a[]={1,2,34,5,6,7};
   int n = sizeof(a)/sizeof(int );
   cout<<check7(a,n,0);

   cout<<first7(a,n,0);
   cout<<last7(a,n);
//   all7(a,n,0);

   
   return  0;
}