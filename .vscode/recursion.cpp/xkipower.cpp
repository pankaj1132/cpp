#include <iostream>
#include <climits>
using namespace std;
int  power(int x , int n ){
if (n==0){
   return 1 ;


}
return  x*power(x,n-1);


}
int main(){
   int n =3;
   int x=4;
  cout<< power(x,n)<<endl;

   
   return 0;
}