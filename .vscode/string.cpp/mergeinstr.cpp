#include <iostream>
#include<cstring>
#include <climits>
using namespace std;
void append(char *b, char*a){
    int i=0;
   int len = strlen(a);
   int j=strlen(b);
   while(i<=len){
      b[j]=a[i];
      j++;
      i++;
   }

}
int main(){
   char a[100]="hello";
   char b[100]="world";
   append(a,b);
   // strcat(a,b);
  cout<<a<<endl;
   return 0;
}
