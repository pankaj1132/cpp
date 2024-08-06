#include <iostream>
#include <climits>
using namespace std;
int factorial (int n ){
   if (n==0){
      return 1;
   }
     int chotiproblem = factorial(n-1);
     int ans = n*chotiproblem;
     return ans;
}
int main(){
   int n ;
   cin>>n ;
   cout <<factorial(n)<<endl;
   
   return 0;
}