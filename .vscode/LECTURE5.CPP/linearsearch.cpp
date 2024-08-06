#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int key=4;
    int i;
    for( i=0; i<5;i++){
        if(a[i]==key){

            cout<<"found"<<i;
            break;
        }

    }
    if (i==5)
    {
        cout<<"not found";
    }
    
    return 0;
}