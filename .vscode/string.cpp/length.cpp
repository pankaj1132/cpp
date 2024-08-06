#include <iostream>
#include <climits>
using namespace std;
int length(char *a){
   int i;
   for (int i = 0; a[i]!='\0'; i++)
   {
      
   }
   return i;
   
}
int main(){
   char a[100]="hello";
   // cin.getline(a,100);
   cout<<length(a)<<endl;
   
   return 0;
}