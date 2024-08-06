#include <iostream>
using namespace std;
int main()
{
    int n, no;
    cin >> n;
    bool prime;
    for (no = 2; no <= n; no++)
    {
        prime = true;
        for (int i = 2; i <= no-1; i++)
        {
            if (no % i == 0)
            {
                prime = false;
            }
        }
        if (prime == true)
        {
            cout << no << endl;
        }
    }
    cout << endl;

    return 0;
}