#include <iostream>
using namespace std;

int main()
{
    int i, j,x = 0;
    int n;
    cin >> n;
    for (i = 1; i <=n; i++)
    {
        if (i==1||j==1)
        {
           cout<<1;
        }
        else
        {
           for (j = 1; j <= i; j++)
           {
               if(j==1 || j==i)     
                cout << i-1;     
               else{
                   cout<< 0;
               }
                   
           }
        }
        cout << endl;
        
    }
    return 0;
}
