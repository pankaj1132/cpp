#include <bits/stdc++.h>
using namespace std;
void spiralprint(int a[][100],int n ,int m ){
   int sr=0,sc=0,ec=m-1,er=n-1;
   while (sr<=er and sc<=ec)
   {
      // print sr, sc till er
      for (int j= sc;j <=ec; j++)
      {
         cout<<a[sr][j]<<" ";
      }sr++;
      // print ec, sr till er
      for (int  i = sr; i <=er; i++)
      {
         cout<<a[i][ec]<<' ';
      }ec--;
      if(sr<er){
            for(int col=ec;col>=sc;col--){
                cout<<a[er][col]<<" ";
            }
        }
        er--;
        if(sc<ec){
            for(int row=er;row>=sr;row--){
                cout<<a[row][sc]<<" ";
            }
        }
        sc++;
      
      
      
   }
   
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
         /* code */cin>>a[i][j];
         cout<<"\t";
         
      }
      
   }
    for (int i = 0; i < n; i++)
   {
      /* code */for (int j = 0; j< m; j++)
      {
         /* code */cout<<a[i][j]<<"     ";
      }cout<<endl;
      
   }
   spiralprint(a,n,m);

   return 0;
}