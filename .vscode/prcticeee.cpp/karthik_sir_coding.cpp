#include <iostream>
#include <stack>
using namespace std;
int main() {
    int Q;
    cin >> Q;

    stack<int> moduleStack;

    while (Q--) {
        int queryType;
     cin >> queryType;

        if (queryType == 1) {
            // Student Query
            if (!moduleStack.empty()) {
                int cost = moduleStack.top();
                moduleStack.pop();
                cout << cost << std::endl;
            } else {
                cout << "No Code" << std::endl;
            }
        } else if (queryType == 2) {
            // Instructor Query
            int cost;
            cin >> cost;
            moduleStack.push(cost);
        }
    }
return 0;
}