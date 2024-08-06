#include <iostream>
#include <climits>
using namespace std;
void printnumbers(int n ){
   if(n==0){
      return ;

   }
    cout<<n<<" ";
   printnumbers(n-1);
  
}
int main(){
   int n =10;
   printnumbers(n);
   
   return 0;
}