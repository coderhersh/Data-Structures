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

string infix_to_prefix(string &infix) {
    string prefix;
    stack<char> Stack;
    reverse(infix.begin(), infix.end());
    
    for (int i = 0; i < infix.size(); ++i) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    for (auto c : infix) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            prefix.push_back(c);
        }else if (c == '(') {
            Stack.push(c);
        }else if (c == ')') {
            while (!Stack.empty() && Stack.top() != '(') {
                prefix.push_back(Stack.top());
                Stack.pop();
            }
            if (!Stack.empty())
                Stack.pop();
        }else {
            while (!Stack.empty() && (Precedence(c) <= Precedence(Stack.top()))) {
                prefix.push_back(Stack.top());
                Stack.pop();
            }
            Stack.push(c);
        }
    }

    while (!Stack.empty()) {
        prefix.push_back(Stack.top());
        Stack.pop();
    }
    
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main(void) {
    string s = "a+b*c-(d/e+f*g*h)*(i/j+k*l+m-n)";
    cout << infix_to_prefix(s);
    return 0;
}
