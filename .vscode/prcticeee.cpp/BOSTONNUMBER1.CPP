#include <iostream>
#include <climits>
using namespace std;
int main(){
    int no, nocopy;
    cin>>no;
    int digitsum=0;
    while (no>0)
    {
        int ld=no%10;
        digitsum += ld;
        no/=10;

    }
    no=nocopy;
    int pf=2;
    int pfdigitsum=0;
    while (no%pf == 0)
    {
        int x=pf;
        int sum=0;
        while (x>0)
        {
            int ld=x%10;
            sum += ld;
            x/=10; 
            
        }
        pfdigitsum += sum;
        no /=pf;
        if (digitsum == pfdigitsum)

        {


            cout<<1;
        }
        else{
            cout<<0;
        }
        

        
    }
    

    
    
    return 0;
}