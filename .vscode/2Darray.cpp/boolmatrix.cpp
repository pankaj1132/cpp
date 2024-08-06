#include <iostream>
#include <climits>
using namespace std;
bool boolmat(int a[100][100], int n, int m ){
   for (int i = 0; i < n; i++)
   {
      /* code */for (int j = 0; j < m; j++)
      {
         /* code */if (a[i][j]==1){
            return false;
         }
         if (a[i][j]==0)
         {
            /* code */return true;
         }
         
      }
      
   }
   
}
int main(){
    int a[100][100];
   int n ,m;
   cin>>n>>m;
   
     for (int i = 0; i < n; i++)
   {
      
      /* code */for (int j = 0; j< m; j++)
      {
         /* code */cin>>a[i][j];
         
         
      }
   }  
   boolmat(a,n,m); 
   return 0;
}