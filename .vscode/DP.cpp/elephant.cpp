#include <bits/stdc++.h>
using namespace std;
int elephant (int n , int m ){
     int dp [100][100];
     for (int i = 0; i <= n; i++)
     {
          /* code */for (int j= 0; j <=m; j++)
          {
               /* code */if (i==0 || j==0)
               {
                    /* code */
               }
               else{
                    int ans =0;
                    for (int k = 0; k<= i-1; k++)
                    {
                         ans+=dp[k][j];
                    }
                         /* code */for (int k = 0; k <= j-1; k++)
                         {
                              /* code */ans+=dp[i][k];
                         }
                         
                    
                    
               }
               
          }return dp[i][j];
          
     }     
}
int main(){
     
     return 0;
}