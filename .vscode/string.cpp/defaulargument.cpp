#include <iostream>
#include <climits>
using namespace std;
int add (int a, int b=0, int c=0){
   return a+b+c;

}
int main(){
   
   cout<<add(10,20,34)<<endl;
   cout<<add(10,34);
   
   return 0;
}