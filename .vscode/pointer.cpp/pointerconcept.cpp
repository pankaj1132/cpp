#include <iostream>
#include <climits>
using namespace std;

void array(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<*(a+i)<<"  "<< a[i]<<endl;
    }
    cout<<endl;
    
}

int main(){
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);
    array(a,n);
    cout<<&a[4]-&a[5];
    return 0;
}