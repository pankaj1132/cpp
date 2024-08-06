#include <iostream>
#include <climits>
using namespace std;
void input(int a[],int n){
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    
}
void printarr(int a[], int n){
     for(int i=5;i>=0;i--){
        cout<<a[i]<<" ";
    }

}
int main(){
    int a[100];
    int n;
    n=sizeof(a)/sizeof(int);
    cin>>n;
    input(a,n);
    printarr(a,n);
    
    
    return 0;
}