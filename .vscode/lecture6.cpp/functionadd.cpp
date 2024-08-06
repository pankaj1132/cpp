#include <iostream>
#include <climits>
using namespace std;
void printsum(int c, int d){
    cout<<"inside print sum: "<<c+d<<endl;
}
int main(){
    int x=10, y=20;
    printsum(x,y);
    printsum(30,56);
    
    return 0;
}