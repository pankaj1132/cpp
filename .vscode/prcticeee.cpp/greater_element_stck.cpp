#include <iostream>
#include <vector>
#include <stack>
using namespace std ;
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    vector<int> result(n, -1); // Initialize the result with -1
    stack<int> stack; // Stack to store indices of elements

    for (int i = 0; i < 2 * n; i++) {
        int index = i % n; // Circular indexing

        while (!stack.empty() && arr[index] > arr[stack.top()]) {
            result[stack.top()] = arr[index];
            stack.pop();
        }

        stack.push(index);
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

return 0;
}