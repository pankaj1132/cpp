#include <iostream>
#include <climits>
using namespace std;
void update(int &x){
    x=x+1;
}
int main(){
    int n=5;
    cout<<"before update: "<<n<<endl;
    update(n);
    cout<<"after update: "<<n<<endl;

    return 0;
}