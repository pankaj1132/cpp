#include <iostream>
#include<cstring>
#include <climits>
using namespace std;
void copystring(char *b, char*a){
   int len= strlen(a);
   for (int i = 0; i <=len; i++)
   {
      b[i]=a[i];
   }
   

}
int main(){
   char a[100]="helloworld";
   char b[100];
   copystring(b,a);
   strcpy(b,a);
   cout<<a<<endl;
   cout<<b<<endl;
   
   return 0;
}