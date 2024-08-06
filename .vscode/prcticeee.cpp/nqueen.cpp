#include <bits/stdc++.h>
using namespace std;
bool kyasafehai(int board[][100], int i, int j, int n)
{

   for (int r = 0; r < i; r++)
   {
      if (board[r][j] == 1)
      {
         return false;
      }
   }
   // check karo right diagonal
   int copy_i = i, copy_j = j; // copy banai taaki i,j kho na jaye
   while (i >= 0 and j < n)
   {
      if (board[i][j] == 1)
      {
         return false;
      }
      i--;
      j++;
   }
   // check karo left diagonal
   i = copy_i;
   j = copy_j;
   while (i >= 0 and j >= 0)
   {
      if (board[i--][j--] == 1)
      {
         return false;
      }
   }
   // agar upar mei kahin queen nhi hai ,that means location is safe
   return true;
}
bool nqueen(int board[][100], int i, int n)
{
   // base case
   if (i == n)
   {
      // print the board jisme queen kahan kahan stored hai
      for (int i = 0; i < n; i++)
      {

         for (int j = 0; j < n; j++)
         {
            // cout<<board[i][j]<<" ";
            board[i][j] == 1 ? cout << "q" : cout << " _";
         }
         cout << endl;
      }
      cout << endl;
      return true;
   }

   // recursive case
   for (int j = 0; j < n; j++)
   {

      if (kyasafehai(board, i, j, n) == true)
      {
         /* code */ board[i][j] = 1;
         bool baakihuiplace = nqueen(board, i + 1, n);

         if (baakihuiplace = true)
         {
            /* code */ return true;
         }
         board[i][j] = 0;
      }
   }
   return false;
}
int main()
{
   int board[][100] = {0};
   int n;
   cin >> n;
   nqueen(board, 0, n);

   return 0;
}