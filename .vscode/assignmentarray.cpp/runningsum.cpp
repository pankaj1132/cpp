#include <iostream>
#include <climits>
using namespace std;

   void input(int *a,int n){
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    
}
void runningsum(int *a, int n,int *sum){
   for (int i = 0; i < n; i++)
   {
      for (int j = 0;j< i; j++)
      {
         sum[i]+=a[j];
         
         
      }
      

   
   }
   for(int i =0;i<n;i++){
        cout<<sum[i]+a[i]<<" ";
    }
   
}


int main(){
    int a[100];
    int n;
    int sum[100]={0};
    n=sizeof(a)/sizeof(int);
    cin>>n;
    input(a,n);
        runningsum(a,n,sum);
  
    
   
   //  printarr(a,n);
    
   return 0;
}