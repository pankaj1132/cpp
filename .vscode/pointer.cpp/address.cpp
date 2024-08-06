#include <iostream>
#include <climits>

using namespace std;
int main(){
    int a=10;
    float f=1.11;
     char ch = 'd';
     int arr[]={1,2,3,4,5};
    cout<<"&a"<<&a<<endl;
     cout<<"&f"<<&f<<endl;
     cout<<(int *)&ch;
     cout<<&arr[0]<<endl;
     cout<<arr<<endl;
     int *ap=&a;
     cout<<ap<<endl;
     float *fp=&f;
     cout<<fp<<endl;
     
     
    return 0;
}