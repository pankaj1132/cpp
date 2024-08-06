#include <iostream>
#include <climits>
using namespace std;
bool issorted (int *a , int n ){
   // base case
   if (n <=1){
      return true;

   }
   // recursive case
   if ( a[0]<a[1] and issorted(a+1, n-1)==true){
       return true;
   }
   else
   return false;
     

}
bool issorted2 (int *a , int n ){
   // base case
   if (n <=1){
      return true;

   }
   // recursive case
   if ( a[n-2]<a[n-1] and issorted(a, n-1)==true){
       return true;
   }
   else
   return false;
     

}
int main(){
   int a[]={1,2,3,54,3,2,};
   int n = sizeof (a)/sizeof (int);
   cout<< issorted(a,n)<<endl;
   cout<< issorted2(a,n);


   
   return 0;
}