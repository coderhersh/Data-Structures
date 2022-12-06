#include <bits/stdc++.h>

using namespace std;

int Precedence(char c) {
    if (c == '^') {
        return 3;
    }
    if (c == '*' || c == '%' || c == '/') {
        return 2;
    }
    if(c == '-' || c == '+') {
        return 1;
    }
    return -1;
}

string infix_to_postfix(string &infix) {
    string postfix;
    stack<char> Stack;
    
    for (auto c : infix) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            postfix.push_back(c); // ok
        }else if (c == '(') {
            Stack.push(c); // ok
        }else if (c == ')') {
            while (!Stack.empty() && Stack.top() != '(') {
                postfix.push_back(Stack.top()); // ok
                Stack.pop();
            }
            if (!Stack.empty())
                Stack.pop();
        }else {
            if (Stack.empty()) {
                Stack.push(c);
                continue;
            }
            while (!Stack.empty() && (Precedence(c) <= Precedence(Stack.top()))) {
                postfix.push_back(Stack.top());
                Stack.pop();
            }
            Stack.push(c);
        }
    }

    while (!Stack.empty()) {
        postfix.push_back(Stack.top());
        Stack.pop();
    }
    
    return postfix;
}

int main(void) {
    string s = "a+b*c-(d/e+f*g*h)";
    cout << infix_to_postfix(s);
    return 0;
}
