#include <iostream>
#include <climits>
using namespace std;
void inputstring(char *a, char delimiter='/n')
{
   int i = 0;
   char ch = cin.get();
   while (ch != delimiter)
   {
      a[i] = ch;
      i++;
      ch = cin.get();
   }
   a[i] = '\0';
}
int main()
{
   char a[100];
   inputstring(a, '$');
   cout << a << endl;

   return 0;
}