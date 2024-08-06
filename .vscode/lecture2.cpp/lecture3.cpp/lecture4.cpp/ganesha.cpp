#include <iostream>
using namespace std;
int main(){
    int n, r, j;
    cin>>n;

    for(j=1; j<=n; j++){
        if(j==1|| j>n/2){
            cout<<"*";

        }
        else{
            cout<<" ";
        }
    }

    cout<<endl;

        for(r=1;r<=(n-3)/2;r++){
            for(j=1; j<=(n+1)/2;j++){
                if(j==1 || j==(n+1)/2){
                    cout<<"*";

                }
                else{
                    cout<<" ";
                }
            }
                cout<<endl;                
            // cout<<"*";
        }


        for(j=1; j<=n; j++){
            cout<<"*";
        }

        cout<<endl;

        
        for(r=1; r<=(n-3)/2;r++){
            for(j=1; j<=n;j++){
                if(j==(n+1)/2||j==n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }


        for(j=1; j<=n; j++){
            if(j<=(n+1)/2 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    return 0;
    }