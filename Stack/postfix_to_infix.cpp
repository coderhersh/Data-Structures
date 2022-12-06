#include <bits/stdc++.h>

using namespace std;

bool isOperator(char c) {
    switch (c) {
    case '^':
    case '-':
    case '+':
    case '/':
    case '*':
        return true;
    }
    return false;
}

string postfix_to_infix(string postfix) {
    stack<string> Stack;

    for (size_t i = 0; i < postfix.size(); i++) {
        if (!isOperator(postfix[i])) {
            Stack.push(string(1, postfix[i]));
        } else {
            string first = Stack.top();
            Stack.pop();
            string second = Stack.top();
            Stack.pop();
            string temp = "(" + second + postfix[i] + first + ")";
            Stack.push(temp);
        }
    }

    return Stack.top();
}

int main(void) {
    string postfix = "ABC/-AK/L-*";
    cout << postfix_to_infix(postfix) << endl;
    return 0;
}
