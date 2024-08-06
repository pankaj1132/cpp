#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float ans=0;
    float inc=1;
    int cp = 1;
    while(cp<=4){
        while(ans*ans<=n){
            ans=ans+inc;

        }
        ans=ans-inc;
        inc=inc/10;
        cp=cp+1;
        
    }
    cout<<ans<<endl;
    return 0;
}