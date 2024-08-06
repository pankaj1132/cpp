#include <iostream>
using namespace std;
int main(){
    int no1,no2,i,sm=0,gcd=0;
    cin>>no1>>no2;
    // if(no1<no2){
    //     sm=no1;
    // }
    // else{
    //     sm=no2;

    // }
    for(i=1;i<=sm;i++){
        if(no1%i==0||no2%i==0){
            gcd=i;
        }cout<<(no1*no2)/gcd;
    }

    return 0;
}