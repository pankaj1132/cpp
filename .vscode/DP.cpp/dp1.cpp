// dp 
// 1.overlapping subproblem ho jaha
// 2. optimal substurcture
// dp has appproch 
// 1.topdown - recursion + memoization     recursion stack is used 
// return se phele store and calculate se phele check 
// 2.bottom up approch  -  iterative approch   recursion stCK nhi hpga
#include <bits/stdc++.h>
using namespace std;

   int topdown(int n , int * dp){
      if (n<=1)
      {
         /* code */return dp[n] = n;
      }
      if (dp[n]!=-1)
      {
         /* code */return dp[n];
      }
      return dp[n]= topdown(n-1,dp)+topdown(n-2,dp);

      
      
   }
   int bottomup(int n ){
      int dp[1000];
      dp[0]=0;
      dp[1]=1;
      for (int i = 2; i <=n; i++)
      {
         /* code */dp[i] =dp[i-1]+dp[i-2];
      }
      return dp[n];
      

   }
int main(){
   int n ; cin>>n;
   int dp [1000];
   for (int i = 0; i <1000; i++)
   {
      /* code */dp[i]=-1;
   }
   cout<<topdown(n,dp);
   

}
