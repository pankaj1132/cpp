#include <iostream>
#include <climits>
using namespace std;
int binarysearch(int a[],int n, int key){
    int s=0, e=n-1;
    while (s<=e)
    {
        int m=(s+e)/2;
        if (a[m]==key)
        {
            return m;
        }
        else if (a[m]<key)
        {
            s=m+1;
        }
        else{
            s=m-1;
        }
        
        
    }
    return -1;
    
}
void printarray(int a[6], int n){
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<endl;/* code */
    }
    
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    int key;
    printarray(a,n);

    cin>>key;
    cout<<"index; "<<binarysearch(a,n,key)<<endl;

    


    return 0;
}
