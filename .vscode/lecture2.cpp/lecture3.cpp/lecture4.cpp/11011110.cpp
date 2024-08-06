#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int i, n, j, stars, spaces;
    cin >> n;
    for (i = 1; i <= (n + 1) / 2; i++)
    {
        if (i == 1)
        {
            for (stars = 1; stars <= n; stars++)
            {
                cout << "*"<<" ";
            }
        }
        else
        {
            for (stars = 1; stars <= (n - (2 * i - 3)) / 2; stars++)
            {
                cout << "*"<<" ";
            }
            for (spaces = 1; spaces <= 2 * i - 3; spaces++)
            {
                cout << " "<<" ";
            }
            for (stars = 1; stars <= (n - (2 * i - 3)) / 2; stars++)
            {
                cout << "*"<<" ";
            }
        }
        cout<<endl;
    }
    for (i = (n + 1) / 2 - 1; i >= 1; i--)
    {
        if (i == 1)
        {
            for (stars = 1; stars <= n; stars++)
            {
                cout << "*"<<" ";
            }
        }
        else
        {
            for (stars = 1; stars <= (n - (2 * i - 3)) / 2; stars++)
            {
                cout << "*"<<" ";
            }
            for (spaces = 1; spaces <= 2 * i - 3; spaces++)
            {
                cout << " "<<" ";
            }
            for (stars = 1; stars <= (n - (2 * i - 3)) / 2; stars++)
            {
                cout << "*"<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}