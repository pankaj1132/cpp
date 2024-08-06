#include <iostream>
#include <climits>
using namespace std;
int main(){
   int r, c;
   cin>>r>>c;

    int **a =  new int *[r];
    for (int i = 0; i< r; i++)
    {
      /* code */a[i]= new int[c];
    }
     int number =1;
    for (int i = 0; i < r; i++)
    {
      /* code */for (int j= 0; j< c;j++)
      {
         /* code */a[i][j]=number ++;
      }
      
    } 
    for (int i = 0; i < r; i++)
    {
      /* code */for (int j= 0; j< c;j++)
      {
         /* code */cout<<a[i][j];
      }
      
    }

    
    
   return 0;
}