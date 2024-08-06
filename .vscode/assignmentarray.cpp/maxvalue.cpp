#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum of array
int largest(int arr[], int n)
{
	int i;

	// Initialize maximum element
	int max = arr[0];

	// Traverse array elements
	// from second and compare
	// every element with current max
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

// Driver Code
int main()
{
	int arr[100];
	int n;
   cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	// Function call
 cout<< largest(arr, n);
	return 0;
}

// This Code is contributed by Shivi_Aggarwal
