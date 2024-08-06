#include <iostream>
#include <climits>
using namespace std;
void input(int *a,int n){
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    
}
void patternbool(int a[], int n){
   int i;
   for (int i = 0; i < n; i++)
   {
      if (a[i]<a[i+2] < a[i+1] and i<i+1<i+2 )
      {
        cout<<1<<endl;
      }
      else{
         cout<<0;
      }
      
   
   }
   
}

int main(){
    int a[100];
    int n;
    int sum[100]={0};
    n=sizeof(a)/sizeof(int);
    cin>>n;
    input(a,n);
    patternbool(a,n);
   
   return 0;
}