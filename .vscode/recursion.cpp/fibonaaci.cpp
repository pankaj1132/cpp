#include <iostream>
#include <climits>
using namespace std;
// f (n )= f(n-1)+f(n-2)
int fibo(int n){
//   ] base case
if (n==0 || n==1){
   return n;
}
// recursive case 
return fibo (n-1)+ fibo(n-2);
}
int main(){
   int n ;
   cin>>n;
   cout << fibo(n)<<endl;
   
   return 0;
}