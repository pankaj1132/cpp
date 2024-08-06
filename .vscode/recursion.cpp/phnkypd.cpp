#include <iostream>
#include <climits>
using namespace std;
char keys [10][10]={" ","", "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phnkypd(char * in , int i, char*out , int j){
   // base case
   if (in[i]=='\0')
   {
      /* code */out[j] ='\0';
      cout<< out << endl;
   }
   // recursive case
   int d=in [i]-'0';
   for (int k= 0; keys[d][k] !=0; k++)
   {
      /* code */out[j]=keys[d][k];
      phnkypd(in , i+1, out, j+1);
   }
   
   
}
int main(){
   char in[]= "23";
   char out[100];
   phnkypd(in,0,out,0);
   
   return 0;
}