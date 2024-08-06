#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int i = ch;
    if(i>=65&&i<=90){
        cout<<"uppercase\n";

    }
    else if (i>=97&&i<=122)
    {
        cout<<"lowercase\n";
        
    }
   
    
    return 0;
}