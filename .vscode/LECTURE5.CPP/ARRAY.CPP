#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[100];
   
    for(int i=0; i<100; i++){
        a[i]=i+1;
    }
    for(int i=0; i<100;i++){
        cout<<a[i]<<endl;
    }cout<<endl;
    return 0;
}