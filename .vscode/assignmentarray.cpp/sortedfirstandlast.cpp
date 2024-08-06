// C++ program to find first and last occurrence of
// an elements in given sorted array
#include <bits/stdc++.h>
using namespace std;

// Function for finding first and last occurrence
// of an elements
void findFirstAndLast(int arr[], int n, int x)
{
	int first = -1, last = -1;
	for (int i = 0; i < n; i++) {
		if (x != arr[i])
			continue;
		if (first == -1)
			first = i;
		last = i;
	}
	if (first != -1)
		cout  << first
			<< last;
	else
		cout << "Not Found";
}

// Driver code
int main()
{
	int arr[100] ;
	int n ;
   cin >>n;
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   
	int x ;
   cin>>x;
	findFirstAndLast(arr, n, x);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
