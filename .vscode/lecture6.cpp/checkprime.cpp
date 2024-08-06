#include <iostream>
#include <climits>
using namespace std;
bool checkprime(int n ){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n){
        return true;
    }
    else{
        return false;
    }
}
void printprime(int n){
    for(int i=2;i<=n; i++){
        if(checkprime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n=100;
    bool isprime = checkprime(n);
    if(isprime){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }cout<<endl;
    printprime(n);
    cout<<endl;
    
    return 0;
}
