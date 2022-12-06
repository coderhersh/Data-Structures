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

string prefix_to_infix(string prefix) {
    stack<string> Stack;

    reverse(prefix.begin(), prefix.end());

    for (size_t i = 0; i < prefix.size(); i++) {
        if (!isOperator(prefix[i])) {
            Stack.push(string(1, prefix[i]));
        } else {
            string first = Stack.top();
            Stack.pop();
            string second = Stack.top();
            Stack.pop();
            string temp = "(" + first + prefix[i] + second + ")";
            Stack.push(temp);
        }
    }

    return Stack.top();
}

int main(void) {
    string prefix = "*-A/BC-/AKL";
    cout << prefix_to_infix(prefix) << endl;
    return 0;
}
