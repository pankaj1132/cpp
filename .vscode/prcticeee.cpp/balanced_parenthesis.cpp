#include <iostream>
#include <stack>
#include <string>
using namespace std ;

bool isBalanced(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string input;
cin >> input;

    if (isBalanced(input)) {
     cout << "Yes" << std::endl;
    } else {
        cout << "No" << std::endl;
    }

return 0;
}