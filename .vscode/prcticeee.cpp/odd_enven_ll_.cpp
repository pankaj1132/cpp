#include <iostream>
using namespace std ;
#include <vector>

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> oddElements, evenElements;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            oddElements.push_back(arr[i]);
        } else {
            evenElements.push_back(arr[i]);
        }
    }

    // Copy oddElements followed by evenElements back to the original list
    int i = 0;
    for (int odd : oddElements) {
        arr[i] = odd;
        i++;
    }
    for (int even : evenElements) {
        arr[i] = even;
        i++;
    }

    for (int element : arr) {
        cout << element << " ";
    }

return 0;
}