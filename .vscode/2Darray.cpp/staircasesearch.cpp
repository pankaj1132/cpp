#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[][4]={{1,2,3,4},{3,9,15,19},{10,12,17,20,},{16,18,22,25}};
    int n =4, m=4;
    int key ;
    cin>>key;
    int i=0, j=m-1;
    int flag=1;
    while (i<n and j>=0)
    {
      if (a[i][j]==key)
      {
         cout<<"found at:   "<<i<<"   "<<j<<endl;
         flag=0;
         break;

      }
      if (key>a[i][j])
      {
         i++;
      }
      else{
         j--;
      }
      
      
    }
    if (flag==1)
    {
      cout<<"not found";
    }
    
    
   
   return 0;
}