#include <iostream>
using namespace std;
int main()
{
    int row, n, col, i ;
    char no;
    row = 1;
    for (row = 1; row <= n; row++)
    {
        no = 'A';
        for (int i; i <= n - row + 1; i++)
        {
            cout << no << " ";
            no++;
        }
        no = no - 1;
        for ( i = 1; i <= n - row +1; i ++)
        {
            cout << no << " ";
            no--;
        }
        cout << endl;
    }
    return 0;
}