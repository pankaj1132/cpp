#include <iostream>
#include <climits>
using namespace std;
int add(int x, int y){
    int sum= x+y;
    return sum;

}
int main(){
    int a=10, b=20;
    int c = add(a,b);
    if (c%2==0)
    {
        cout<<"even ";
    }
    else{
        cout<<"odd";
    }
    
    
    return 0;
}