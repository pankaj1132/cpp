#include <iostream>
#include <climits>
using namespace std;
bool ratmaze(char maze[][5], int sol[][10], int i, int j , int n , int m ){
   // base case
   if (i==n-1 and j==m-1){
      sol[i][j]=1;
      for (int i = 0; i< n; i++)
      {
       for (int j = 0; j <m;j++)
       {
        cout<<sol[i][j]<<" ";
       }cout<<endl;
       
      }
      cout<<endl;
      return false;
      

   }
   // recursive case
   // jispar khade ho maanlo wha solution __hai
   sol[i][j]=1;
   if (j+1<m and maze[i][j+1]!= 'x'){
      bool kyarightsebaatbni = ratmaze (maze,sol, i,j+1,n,m);
      if(kyarightsebaatbni==true){
         return true;
      }
      if (i+1<n and maze [i+1][j]!='x'){
         bool knsbb = ratmaze(maze , sol , i+1,j,n ,m);
         if (knsbb==true)
         {
            /* code */return true;
         }
         

      }
      
      
      

   }
   sol[i][j]=0;
   return false;
   
   

}
int main(){
   char maze[][5]={
      "0000","00xx","0000","xx00"};
   int sol[10][10]={0};
   ratmaze ( maze ,sol,0,0,4,4); 
   return 0;
}