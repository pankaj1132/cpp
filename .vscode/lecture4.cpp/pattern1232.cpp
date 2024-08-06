#include <iostream>
using namespace std;
int main()
{
    int n, i, row, no;
    cin >> n;

    row = 1;
    while (row <= n)
    {
        i = 1;
        while (i <= n - row)
        {
            cout << " ";
            i = i + 1;
        }
        i = 1;
        no = row;
        while (i <= row)
        {
            cout << no;
            no = no + 1;
            i = i + 1;
        }
        i = 1;
        no = 2 * row - 2;
        while (i <= row - 1)
        {
            cout << no;
            
            no = no - 1;
            i = i + 1;
        }
        cout << "\n";
        row = row + 1;
    }

    return 0;
}