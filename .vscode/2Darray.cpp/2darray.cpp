#include <iostream>
#include <climits>
using namespace std;
int main(){
   int a[][4]={{1,2,3,4},{4,5,6,7},{6,7,8,9}};
   for (int i = 0; i < 3; i++)
   {
      /* code */for (int j = 0; j< 4; j++)
      {
         /* code */cout<<a[i][j]<<"     ";
      }cout<<endl;
      
   }
   
   
   return 0;
}