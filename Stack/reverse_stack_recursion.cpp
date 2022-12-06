#include <bits/stdc++.h>

using namespace std;

void printStack(stack<int> Stack) {
    while (!Stack.empty()) {
        cout << Stack.top() << "\n";
        Stack.pop();
    }
    cout << endl;
}

void reverseStack(stack<int> &Stack) {
    if (Stack.empty()) {
        return;
    }
    
    int top = Stack.top();
    Stack.pop();
    reverseStack(Stack);
    stack<int> temp;

    while (!Stack.empty()) {
        temp.push(Stack.top());
        Stack.pop();
    }
    
    Stack.push(top);

    while (!temp.empty()) {
        Stack.push(temp.top());
        temp.pop();
    }
    
    return;
}

int main(void) {
    stack<int> Stack;
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    Stack.push(4);
    Stack.push(5);
    Stack.push(6);

    printStack(Stack);
    cout << "----------\n";
    reverseStack(Stack);
    cout << "****************\n";
    printStack(Stack); 
    
    return 0;
}
