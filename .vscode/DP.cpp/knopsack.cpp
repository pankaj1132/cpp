#include <bits/stdc++.h>
using namespace std;
int knapsack(int *price, int *wt, int n, int capacity)
{
     if (n == 0 || capacity == 0)
     {
          /* code */ return 0;
     }
     int op1 = INT_MIN, op2 = INT_MIN;
     if (wt[n - 1] <= capacity)
     {
          /* code */ op1 = price[n - 1] + knapsack(price, wt, n - 1, capacity - wt[n - 1]);
          op2 = knapsack(price, wt, n - 1, capacity);
          return max(op1, op2);
     }
}
int topdown(int *price, int *wt, int n, int capacity, int dp[100][100])
{
     if (n == 0 || capacity == 0)
     {
          /* code */ return dp[n][capacity] = 0;
     }
     if (dp[n][capacity] != -1)
     {
          /* code */ return dp[n][capacity];
     }

     int op1 = INT_MIN, op2 = INT_MIN;
     if (wt[n - 1] <= capacity)
     {
          /* code */ op1 = price[n - 1] + topdown(price, wt, n - 1, capacity - wt[n - 1], dp);
     }
     op2 = topdown(price, wt, n - 1, capacity, dp);
     return dp[n][capacity] = max(op1, op2);
}
int bottomup(int *price, int *wt, int N, int capacity)
{
     int dp [10][10]={0};
     for (int n = 1; n<= N;n++)
     {
          /* code */for (int c = 1; c <= capacity; c++)
          {
               /* code */int op1=0,op2=0;
               if (wt[n-1]<=c)
               {
                    /* code */op1=price[n-1]+dp[n-1][c-wt[n-1]];
               }
                        op2=dp[n-1][c];
                        dp[n][c]=max(op1,op2);
               
          }
          
     } for (int n = 1; n<= N;n++)
     {
          /* code */for (int c = 1; c <= capacity; c++)
          {
              cout<<dp[n][c];
               
          }
          cout<<endl;
          
     }
     return dp[N][capacity];
     
     
}
int main()
{
     int price[] = {7, 4, 4};
     int wt[] = {3, 2, 2};
     int n = sizeof(price) / sizeof(int);
     int capacity = 4;
     int dp[n + 1][100];
     memset(dp, -1, sizeof dp);

     cout << knapsack(price, wt, n, capacity) << endl;
     cout << topdown(price, wt, n, capacity, dp)<<endl;
     cout<<bottomup(price , wt , n , capacity);

     return 0;
}