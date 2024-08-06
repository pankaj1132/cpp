#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    
    char *chp = (char*)arr;
    cout<<(int *)chp<<endl;
    cout<<(int *)(chp+1)<<endl;
    
    return 0;
}