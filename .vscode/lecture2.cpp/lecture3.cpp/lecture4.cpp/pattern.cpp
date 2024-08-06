#include <iostream>
using namespace std;
int main(){
    
    int n; 
    cin>>n;
    for(int i=n-1; i<=1;i--){
        for( int j=1; j<=i; j++){
            cout<<"*"<<"\t ";
        }
        for(int j=1; j<=(n-i)*2;j++){
            cout<<" "<<"\t";
        }
        for( int j=1; j<=i; j++){
            cout<<"*"<<"\t";
        }
    
    for(int i=1; i<=n;i++){
        for( int j=1; j<=i; j++){
            cout<<"*"<<"\t ";
        }
        for(int j=1; j<=(n-i)*2;j++){
            cout<<" "<<"\t";
        }
        for( int j=1; j<=i; j++){
            cout<<"*"<<"\t";
        }
        cout<<endl;        
        
        
    }
    return 0;
}