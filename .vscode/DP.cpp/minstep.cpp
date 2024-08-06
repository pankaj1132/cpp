#include <bits/stdc++.h>
using namespace std;
int minsteps(int n, int *dp ){
   // base case 
   if (n ==1)
   {
      /* code */return dp[n]=0;
   }
   if(dp[n]!=-1)return dp[n];
   int op1 , op2 ,op3;
op1=op2=op3=INT_MAX;
if(n%3==0)op1=minsteps(n/3,dp);
   if(n%2==0)op2=minsteps(n/2,dp);
   op3= minsteps(n-1,dp);
   return dp[n]= min(op1, min(op2,op3))+1;
}
int bottomup(int n){
   int dp[1000];
   dp[1]=0;
   for (int i = 2; i <=n; i++)
   {
      /* code */int op1,op2,op3;
      op1=op2=op3=INT_MAX;
      if(i%3==0)op1=dp[i/3];
      if(i%2==0)op2=dp[i/2];
      op3=dp[i-1];
      dp[i]=min(op1,min(op2,op3))+1;
   }
   return dp[n];
   
}
int main(){
   int n ; cin>>n;
   int dp [10000];
   for (int i = 0; i <10000; i++)
   {
      /* code */dp[i]=-1;
   }
   cout<<minsteps(n,dp);
   cout<<endl;
   cout<<bottomup(n);

   
   return 0;
}