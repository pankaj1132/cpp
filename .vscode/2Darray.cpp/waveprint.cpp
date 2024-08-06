#include <iostream>
#include <climits>
using namespace std;
void waveprint(int a[][100],int n,int m){
   for (int  j= 0;j < m; j++)
   {
      if (j%2==0)
   {
      for (int i = 0; i < n; i++)
      {
         cout<<a[i][j]<<" ";
      }
      
   }
   else{
      for (int i = n-1; i >=0; i--)
      {
         cout<<a[i][j]<<" ";
      }
      
   }
   }cout<<endl;
   
}
int main(){
   int a[100][100];
   int n ,m;
   cin>>n>>m;
   int num=1;
     for (int i = 0; i < n; i++)
   {
      
      /* code */for (int j = 0; j< m; j++)
      {
       cin>>a[i][j];
       
      }
      
   }
  waveprint(a,n,m);

   
  

   return 0;
}