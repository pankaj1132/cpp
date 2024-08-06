#include <iostream>
#include <climits>
using namespace std;
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
    for (int i = 0; i < n; i++)
   {
      /* code */for (int j = 0; j< m; j++)
      {
         /* code */cout<<a[i][j]<<"     ";
      }cout<<endl;
      
   }

   return 0;
}