#include <iostream>
#include <stack>
using namespace std ; 

class Queue {
private:
    stack<int> stack1; // Main stack for enqueue
    stack<int> stack2; // Auxiliary stack for dequeue

public:
    void enqueue(int x) {
        stack1.push(x);
    }

    int dequeue() {
        if (stack2.empty()) {
            if (stack1.empty()) {
                return -1; // Queue is empty
            }

            // Transfer elements from stack1 to stack2
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        int front = stack2.top();
        stack2.pop();
        return front;
    }

    bool is_empty() {
        return stack1.empty() && stack2.empty();
    }
};

int main() {
    int N;
    cin >> N;

    Queue queue;
    for (int i = 0; i < N; i++) {
        queue.enqueue(i);
    }

    while (!queue.is_empty()) {
        int front = queue.dequeue();
        if (front != -1) {
            cout << front << " ";
        }
    }

    cout << endl;
return 0;
}