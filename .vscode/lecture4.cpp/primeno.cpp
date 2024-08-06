#include <iostream>
using namespace std;
int main(){
    int n , i;
    cin>>n;
    bool a;
    a=true;
    i=2;
    while(i<=n-1){
        if(n%i==0){
            a=false;
            
        }
        i++;
    }
    if(n==1){
        cout<<"appko kya dikkat hai";
    }
    if(a==true){
        cout<<"prime no";
    }
    else{
        cout<<"not prime";
    }
    cout<<"hello world";
    return 0;
}