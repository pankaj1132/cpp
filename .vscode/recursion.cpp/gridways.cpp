#include <iostream>
#include <climits>
using namespace std;
int ways(int n, int m)
{
   if (n == 0 and m == 0)
   {
      /* code */ return 1;
   }
   if (n < 0 || m < 0)
   {
      /* code */ return 0;
   }
   return ways(n - 1, m) + ways(n, m - 1);
}
int main()
{
   int n, m;
   cin >> n >> m;
   cout << ways(n, m) << endl;

   return 0;
}