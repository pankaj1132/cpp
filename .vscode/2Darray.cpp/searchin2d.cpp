#include <iostream>
#include <climits>
using namespace std;
int main(){
   int a[100][100];
   int n ,m,i,j;
   cin>>n>>m;
   int key;
   int num=1;
     for (int i = 0; i < n; i++)
   {
      
      /* code */for (int j = 0; j< m; j++)
      {
         // /* code */cin>>a[i][j]<<"     ";
         a[i][j]= num;
         num++;
      }
      
   }
   cout<<"enter the key; ";
   cin>>key;
   for (int i = 0; i < n; i++)
   {
      /* code */for (int j = 0; j < m; j++)
      {
         /* code */if (a[i][j]==key)
         {
            cout<<"key found"<<i<<" "<<j;
            break;
         }
         
      }
      
      if(j<m){
         break;
      }
      
      
   }
   
   
   return 0;
}