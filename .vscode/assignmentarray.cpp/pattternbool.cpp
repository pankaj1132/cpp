#include <bits/stdc++.h>
 
using namespace std;
 
// Function to check if there exist
// triplet in the array such that
// i < j < k and arr[i] < arr[k] < arr[j]
bool findTriplet(int *a, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <n; j++) {
            for (int k = j + 1; k <n; k++) {
                // Triplet found, hence return false
                if (a[i] < a[k] && a[k] < a[j])
                    return true;
            }
        }
    }
    // No triplet found, hence return false
    return false;
}
 
// Driver Code
int main()
{
    // Given array
   int a[100];
   int n;
   cin>>n;
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
    // Function Call
    if (findTriplet(a,n)) {
        cout <<1;
    }
    else {
        cout <<0;
    }
    return 0;
}