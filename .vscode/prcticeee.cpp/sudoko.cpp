#include <bits/stdc++.h>
#include<math.h>
using namespace std;
bool kyasafehai(int mat [9][9], int i , int j ,int n, int no){
   for (int k = 0; k < n; k++)
   {
      /* code */if (mat[k][j]==no || mat[i][k]==no)
      {
         /* code */return  false;
      }
   }
      n = sqrt(n);
      int x = (i / n) * n;
	int y = (j / n) * n;
   for (int i = x; i <x+n; ++i)
   {
      /* code */for (int j = y; j<y+ n; ++j)
      {
         /* code */if (mat[i][j]==no)
         {
            /* code */return false;

         }
         
      }
      
   }
   
      
   
   return true;
   
}
bool sudokusolver(int mat[9][9], int i , int j , int n ){
   // base case 
   if (i==n)
   {
      /* code */for (int i = 0; i < n; i++)
      {
         /* code */for (int j= 0; j< n;j++)
         {
            /* code */ cout<<mat[i][j];
         }
         cout<<endl;
         
      }
      return  true;
      
   }
   	if (j == n) {
		return sudokusolver(mat, i + 1, 0, n);
	}

	//  Agar cell already filled hai, toh recursion ko bolo aage jaa
	if (mat[i][j] != 0) {
		return sudokusolver(mat, i, j + 1, n);
	}

   
   // recursive  case 
   for (int no = 1; no<= n; ++no)
   {
      /* code */if(kyasafehai(mat,i,j,n,no)==true){
         mat[i][j]=no;
      
      bool baakikaamdekho = sudokusolver(mat,i , j+1 , n);
      	if ( baakikaamdekho== true) { // Agar ho gaya baaki solve,
				//toh baat ban gai
				return true;
			}

			// If nhi hua solve, toh jo number rakha hai vo sahi nhi hai
			mat[i][j] = 0;
      }
   }
   return false;
   

}
int main(){
   int mat[9][9] =
	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	sudokusolver(mat, 0, 0, 9);
   return 0;
}