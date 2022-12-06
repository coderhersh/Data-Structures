#include <bits/stdc++.h>

using namespace std;

bool isOperator(char c) {
    switch (c) {
    case '^':
    case '*':
    case '/':
    case '-':
    case '+':
        return true;
    }
    return false;
}

string postfix_to_prefix(string postfix) {
    stack<string> Stack;

    for (int i = 0; i < postfix.size(); ++i) {
        if (!isOperator(postfix[i])) {
            Stack.push(string(1, postfix[i])); cout << "qwerty\n";
        } else {
            string first = Stack.top();
            Stack.pop();
            string second = Stack.top();
            Stack.pop();
            string temp = postfix[i] + second + first;
            Stack.push(temp);
        }
    }

    return Stack.top();
}

int main(void) {
    string postfix = "ABC/-AK/L-*";
    cout << postfix_to_prefix(postfix) << endl;
    return 0;
}
