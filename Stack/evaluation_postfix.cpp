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

int postfixEvaluation(string &String) {
    stack<int> Stack;

    for (auto character : String) {
        if (!isOperator(character)) {
            Stack.push(int(String[i] - '0'));
        } else {
            int first = Stack.top();
            Stack.pop();
            int second = Stack.top();
            Stack.pop();
            Stack.push(evaluate(second, character, first));
        }
    }

    return Stack.top();
}

int main(void) {
    
    return 0;
}