#include <iostream>
#include <climits>
using namespace std;
int main(){
     int a=10;
    float f=1.11;
    
     int arr[]={1,2,3,4,5};
     int *ap=&a;
     cout<<*ap<<endl;
     float *fp=&f;
     cout<<*fp<<endl;
    
    return 0;
}