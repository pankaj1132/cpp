#include <iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=4){
        if(i==2){
            i++;
            continue;
        }
        cout<<i;
        i++;

    }
    //int i;                        break the loop
    //for (i = 0; i < 10; i++)
    //{
    //    if (i == 5)
    //    {
    //        break;
    //    }
    //    cout << i;
    //}
//
    return 0;
}