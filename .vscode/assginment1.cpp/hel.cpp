#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n, i, j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1; j<=n-1;j++){
            cout<<"$";
        }cout<<endl;
    }
    return 0;
}