#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[]={4,1,3,2,0};
    int n=sizeof(a)/sizeof(int);
    for(int j=1; j<=n;j++){
        int i=j-1;
        int handpickedcard = a[j];
        while(i>=0 and a[j]>a[i]){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=handpickedcard;
    }
    for(int i=0;i<=n;i++){
        cout<<a[i]<<endl;
    }cout<<endl;
    
    return 0;
}