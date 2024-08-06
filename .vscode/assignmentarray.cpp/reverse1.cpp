#include <iostream>
#include <climits>
using namespace std;
void input(int *a,int n){
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    
}
void inverse(int *a, int n ){
   int index=0;
   for (int  i = 0; i < n; i++)
   {
      index=a[i];
      index++;
   }
   
}

int main(){
    int a[100];
    int n;
    n=sizeof(a)/sizeof(int);
    cin>>n;
    input(a,n);
   inverse(a,n);
   for (int i = 0; i < n; i++)
   {
      cout<<a[i]<<" ";
   }
   
    
    
    return 0;
}