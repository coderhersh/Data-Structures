#include <bits/stdc++.h>

using namespace std;

bool isOperator(char c) {
    if (c == '*' || c == '/' || c == '+' || c == '-' || c == '^') {
        return true;
    }
    return false;
}

int evaluate(int second, char o, int first) {
    switch (o) {
    case '+': return second + first;
    case '-': return second - first;
    case '*': return second * first;
    case '/': return second / first;
    case '^': return pow(second, first);
    }
}

int prefixEvaluation(string &String) {
    stack<int> Stack;

    for (int i = String.size() - 1; i >= 0; --i) {
        if (!isOperator(String[i])) {
            Stack.push(int(String[i] - '0'));
        } else {
            int first = Stack.top();
            Stack.pop();
            int second = Stack.top();
            Stack.pop();
            Stack.push(evaluate(second, String[i], first));
        }
    }

    return Stack.top();
}

int main(void) {
    
    return 0;
}