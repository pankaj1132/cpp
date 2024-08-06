#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    for (int i=0; i<5;i++){
        cout<<a[i]<<endl;
    }cout<<endl;
    cout<<n<<endl;
    cout<<sizeof(a);
    return 0;
}