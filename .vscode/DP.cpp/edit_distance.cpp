#include <bits/stdc++.h>
using namespace std;
int editdistance(string s1, string s2 , int n, int m ){
     if(n==0)return m;
     if(m==0)return n;
     // recursive case 
     if (s1[n-1]==s2[m-1])
     {
          return editdistance(s1,s2,n-1,m-1);
     }
     else{
          int op1= editdistance(s1,s2,n,m-1);//insertion
           int op2= editdistance(s1,s2,n-1,m);//deletion
            int op3= editdistance(s1,s2,n-1,m-1);//updation
            return 1+min(op1,min(op2,op3));
     }
     
}
int topdown(string s1, string s2 , int n, int m, int dp[100][100] ){
     if(n==0)return dp[n][m]=m;
     if(m==0)return dp[n][m]=n;
     if(dp[n][m]!=-1)return dp[n][m];
     // recursive case 
     if (s1[n-1]==s2[m-1])
     {
          return dp[n][m]= topdown(s1,s2,n-1,m-1,dp);
     }
     else{
          int op1= topdown(s1,s2,n,m-1,dp);//insertion
           int op2= topdown(s1,s2,n-1,m,dp);//deletion
            int op3= topdown(s1,s2,n-1,m-1,dp);//updation
            return dp[n][m]= 1+min(op1,min(op2,op3));
     }
     
}
int bottomup(string s1, string s2)
{
    int dp[100][100] = {0};
    int n = s1.size(), m = s2.size();
    for (int k= 1; k<=m; k++)
    {
     /* code */dp[0][k]=k;
    }
     for (int k= 1; k<=n; k++)
    {
     /* code */dp[k][0]=k;
    }
    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] =  dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1+min(dp[i - 1][j], min(dp[i-1][j-1],dp[i][j - 1]));
            }
        }
        
    }
     for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        return dp[n][m];
}
int main(){
     string s1 ="sunday";
     string s2 = "saturday";
     int dp[100][100] ;
     for (int  i = 0; i < 100; i++)
     {
          /* code */for (int j = 0; j< 100; j++)
          {
               /* code */dp[i][j]=-1;
          }
          
     }
     
     cout<<editdistance(s1,s2,s1.size(),s2.size())<<endl;
     cout<<topdown(s1,s2,s1.size(),s2.size(),dp)<<endl;
     cout<<bottomup(s1,s2);

     return 0;
}