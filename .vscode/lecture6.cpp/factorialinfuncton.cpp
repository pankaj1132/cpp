#include <iostream>
#include <climits>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans *=i;

    }
    return ans;
}
int ncr(int n, int r){
    int factn = factorial(n);
    int factr = factorial(r);
    int factn_r= factorial(n - r);
    int ans = factn/(factr * factn_r);
    return ans;
}
int main(){
    cout<<ncr(5,2)<<endl;
    return 0;
    
    return 0;
}