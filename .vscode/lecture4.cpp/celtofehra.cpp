#include <iostream>
using namespace std;
int main(){
    int init ,n ,step , cel;
    cin>>init>>n>>step;
    int i=init;
    
    
    while(i<=n){
        cel=(5/9.0)*(i-32);
        cout<<i<<" "<< cel<<endl;
        i=i+step;

    }
    return 0;
}