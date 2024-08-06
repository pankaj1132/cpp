#include <iostream>
#include <climits>
using namespace std;
void subsequence(char * in , int i, char *out , int j){
   // base case 
   if ( in [i]== '\0'){
      out[j]= '\0';
      cout<<out<<endl;
      return ;


         }
         // recursive case
         // 1. ith character ko mat lo output mei
         subsequence(in, i+1, out , j);
         // 2. ith character ko le lo output move_if_noexcept
         out [j]=in [i];
         subsequence(in,i+1,out , j+1);
}         
int main(){
   char a[]= "abc";
   char out[100];
   subsequence(a,0,out,0);
   
   return 0;
}