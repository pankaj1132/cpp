#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int i, n, j, no;
    cin >> n;
    for (i = 1; i <= (n + 1) / 2; i++)
    {
        for (j = 1; j <= n - (2 * i - 1); j++)
        {
            cout << " "
                 << " ";
        }
        no = i;
        for (j = 1; j <= i; j++)
        {
            cout << no << " ";
            no--;
        }
        for (j = 1; j <= 2 * i - 3; j++)
        {
            cout << " "
                 << " ";
        }
        no = 1;
        for (j = 1; j <= i; j++)
        {
            if (i != 1)
                cout << no << " ";
            no++;
        }

        cout << endl;
    }
    for (i = (n + 1) / 2-1; i >=1; i--)
    {
        for (j = 1; j <= n - (2 * i - 1); j++)
        {
            cout << " "
                 << " ";
        }
        no = i;
        for (j = 1; j <= i; j++)
        {
            cout << no << " ";
            no--;
        }
        for (j = 1; j <= 2 * i - 3; j++)
        {
            cout << " "
                 << " ";
        }
        no = 1;
        for (j = 1; j <= i; j++)
        {
            if (i != 1)
                cout << no << " ";
            no++;
        }

        cout << endl;
    }

    return 0;
}

