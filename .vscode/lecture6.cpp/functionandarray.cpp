#include <iostream>
#include <climits>
using namespace std;
void printarray(int a[], int n){
     
    for (int i=0; i<5;i++){
        cout<<a[i]<<endl;
    }cout<<endl;
}
void updatearray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        a[i]*=a[i];
    }
    
}
void bubblesort(int a[], int n){
        for (int i = 0; i < n-1; i++)
    {
        
        for (int j = 0; j < n-1; j++)
        {
            if(a[j]>a[j+1]){
               
                swap(a[j],a[j+1]);
            }
        }
    }                   
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    // updatearray(a,n);
    bubblesort(a,n);
    printarray(a,n);
    
    return 0;

}