#include <iostream>
using namespace std;
int main()
{
    int n, r, col, x;
    cin >> n;
    for (r = 1; r <= n; r++)
    {
        for (col = 1; col <= r; col++)
        {
            if (col == 1 || col == r)
            {
                cout << 1;
            }
            else if (r % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}