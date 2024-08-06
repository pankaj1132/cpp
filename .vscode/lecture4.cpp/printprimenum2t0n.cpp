#include <iostream>
using namespace std;
int main()
{
    int no, n, i;
    cin >> n;

    no = 2;

    while (no <= n)
    {
        bool a;
        a = true;
        i = 2;
        while (i <= no - 1)
        {
            if (no % i == 0)
            {
                a = false;
            }
            i++;
        }

        if (a == true)
        {
            cout << no << endl;
        }
        no = no + 1;
    }

    return 0;
}