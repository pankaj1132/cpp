#include <iostream>
using namespace std;
int main(){
    int n, i,no, j=1, space;
    cin>>n;
    for(j=1; j<=n; j++){
        cout<<"*"<<" ";
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }cout<<endl;
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=i;j--){
            cout<<"*";
        }cout<<endl;
    }

        
 
   
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
    // * * 
    //  * 

    return 0;
}