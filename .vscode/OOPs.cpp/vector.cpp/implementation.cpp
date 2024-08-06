#include <iostream>
#include <climits>
using namespace std;
template<typename T>
class vector
{
public:
   T *a;
   int s, cap;
   vector(int n = 1)
   {
      a = new T[n];
      s = 0;

      cap = n;
   }

   void push_back(T data)
   {
      if (s = cap)
      {
         T*olda = a;
         int oldcap = cap;
         cap *= 2;
         a = new T[cap];
         for (int i = 0; i < oldcap; i++)
         {
            a[i] = olda[i];
         }
         delete[] olda;
      }

      a[s] = data;
      s++;
   }
   void pop_back()
   {
      if (s > 0)
      {
         s--;
      }
   }
   bool empty()
   {
      return s;
   }
   int capacity()
   {
      return s;
   }
   T operator[](int indx)
   {
      return a[indx];
   }
   int size()
   {
      return s;
   }
};

int main()
{
   vector<char> V;
   V.push_back(1);
   V.push_back(2);
   V.push_back(3);
   V.push_back(4);
   V.push_back(5);

   for (int i = 0; i < V.size(); i++)
   {
      cout << V[i] << " ";
   }
   cout << endl;
   cout << "size" << V.size() << endl;
   cout << "capacity" << V.capacity() << endl;

   return 0;
}