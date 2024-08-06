#include <iostream>
#include <stack>
#include <vector>
using namespace std ;

long long largestRectangleArea(const vector<long long>& heights) {
    stack<int> stack;
    long long maxArea = 0;

    int i = 0;
    while (i < heights.size()) {
        if (stack.empty() || heights[i] >= heights[stack.top()]) {
            stack.push(i);
            i++;
        } else {
            int top = stack.top();
            stack.pop();

            long long width = stack.empty() ? i : i - stack.top() - 1;
            maxArea = max(maxArea, heights[top] * width);
        }
    }

    while (!stack.empty()) {
        int top = stack.top();
        stack.pop();

        long long width = stack.empty() ? i : i - stack.top() - 1;
        maxArea = max(maxArea, heights[top] * width);
    }

    return maxArea;
}

int main() {
    int N;
    cin >> N;

    vector<long long> heights(N);

    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    long long maxArea = largestRectangleArea(heights);

    cout << maxArea << std::endl;

return 0;
}