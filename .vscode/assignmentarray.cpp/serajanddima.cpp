// CPP program to find out
// Sum of elements at even and
// odd index positions separately
#include <iostream>

using namespace std;

// Function to calculate sum
void EvenOddSum(int arr[], int n)
{
	int even = 0;
	int odd = 0;
	for (int i = 0; i < n; i++) {
		// Loop to find even, odd sum
		if (i % 2 == 0)
			even += arr[i];
		else
			odd += arr[i];
	}

	cout   << even<<" ";
	cout  << odd;
}

// Driver function
int main()
{
	int arr[100];
	int n ;
   cin>>n;
   for (int i = 0; i <n; i++)
   {
      /* code */cin>>arr[i];
   }
   

	EvenOddSum(arr, n);

	return 0;
}
