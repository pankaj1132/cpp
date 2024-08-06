#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[]={2,4,6,5,4};
    int n=sizeof(a)/sizeof(int);
    for (int i = 0; i < n-1; i++)
    {
        int cnt=0;
        for (int j = 0; j < n-1; j++)
        {
            if(a[j]>a[j+1]){
                cnt++;
                swap(a[j],a[j+1]);
            }
        }
        if(cnt==0){
            break;
        }
        
    }
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    
    return 0;
}