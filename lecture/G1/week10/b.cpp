#include <iostream>
#include <stack>

using namespace std;

bool isValidBrackets(string st) {
    stack <char> stack;
    for (int i = 0; i < st.size(); i++) {
        char c = st[i];

        switch(c) {
            case '(':
            case '{':
            case '[':
                stack.push(c);
                break;
            case ')': 
                if (stack.empty() || stack.top() != '(') {
                    return false;
                }
                stack.pop();
                break;
            case ']': 
                if (stack.empty() || stack.top() != '[') {
                    return false;
                }
                stack.pop();
                break;
            case '}': 
                if (stack.empty() || stack.top() != '{') {
                    return false;
                }
                stack.pop();
                break;
        }
    }
    // ({{{[[[[
    if (stack.empty()) {
        return true;
    } else {
        return false;
    }
}
int main() {
    string st;
    cin >> st;
    /*
    Is the given brackets sequence correct?
        {([[[{()}]]])}
     10 + {56 + 456 } + {456 + (10 * 50)}
     {}{()}
     
     {}}

    */
    cout << isValidBrackets(st) << endl;
    return 0;
}