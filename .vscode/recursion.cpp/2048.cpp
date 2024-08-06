#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
string s[]={
    "zero","one","two","three","four","five","six","seven","eight","nine"
};
void solve(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive case
    int ld=n%10;
     cout<<s[ld]<<" ";
    solve(n/10);
   
}
int main(){
    solve (2048);
    
    return 0;
}