#include <iostream>
using namespace std;
int main()
{
    int n, no, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        no = 1;
        for (j = 1; j <= i; j++)
        {
            cout << no<<" ";
            no = no +1;
            
            
        }
        cout << endl;
    }
    return 0;
}