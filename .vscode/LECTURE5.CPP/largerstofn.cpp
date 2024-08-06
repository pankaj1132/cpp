#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[]={1,2,34,55,6};
    int n=sizeof(a)/sizeof(int);
    int lar = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>lar){
            lar=a[i];
        }
        
    }
    cout<<"largest"<<lar<<endl;
    return 0;
}