// C++ program to find Majority
// element in an array
#include <bits/stdc++.h>
using namespace std;

// Function to find Majority element
// in an array
void findMajority(int arr[], int n)
{
	int maxCount = 0;
	int index = -1; // sentinels
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}

		// update maxCount if count of
		// current element is greater
		if (count > maxCount) {
			maxCount = count;
			index = i;
		}
	}

	// if maxCount is greater than n/2
	// return the corresponding element
	if (maxCount > n / 2)
		cout << arr[index] << endl;

	else
		cout << "No Majority Element" << endl;
}

// Driver code
int main()
{
	int arr[100];
	int n ;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
      /* code */cin>>arr[i];
   }
   

	// Function calling
	findMajority(arr, n);

	return 0;
}
