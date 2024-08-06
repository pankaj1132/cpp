#include <iostream>
#include <vector>
using namespace std;

bool isValidOperations(const vector<int>& operations) {
    vector<int> stack;
    for (int operation : operations) {
        if (operation == 1) {
            stack.push_back(1);  // Push operation
        } else if (operation == 0) {
            if (stack.empty()) {
                return false;  // Pop operation with an empty queue
            } else {
                stack.pop_back();
            }
        }
    }
    return stack.empty();
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> operations(N);

        for (int i = 0; i < N; i++) {
          cin >> operations[i];
        }

        if (isValidOperations(operations)) {
            cout << "Valid" << std::endl;
        } else {
            cout << "Invalid" << std::endl;
        }
    }

    return 0;
}
