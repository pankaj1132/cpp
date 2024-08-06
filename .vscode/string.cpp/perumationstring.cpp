#include <iostream>
#include <climits>
using namespace std;
bool ispermutation(char *a, char*b){
   int freq [26]={0};
   for (int i = 0;a[i] !='\0' ; i++)
   {
      /* code */int index = a[i]-'a';
      freq[index]++;
    
   }
   for (int i = 0; b[i]!='\0'; i++)
   {
      /* code */int index = b[i]- 'a';
      freq[index]--;
   }
   for (int i = 0; i < 26; i++){
  
   
   if (freq[i]!=0)
   {
      /* code */return false;
   }
   }
   return true;
   
   
   
}

int main(){
   char a[]="abdcd";
   char b[]="bcdda";
  bool ans = ispermutation(a,b);
  cout<<ans<<endl;


   
   return 0;
}