#include <bits/stdc++.h>

using namespace std;

void printStack(stack<int> Stack) {
    while (!Stack.empty()) {
        cout << Stack.top() << "\n";
        Stack.pop();
    }
    cout << endl;
}

void sortedInsert(stack<int> &st, int element) {
    if (st.empty() || element > st.top()) {
        st.push(element);
    } else {
        int top = st.top();
        st.pop();
        sortedInsert(st, element);
        st.push(top);
    }
    return;
}

void sortStack(stack<int> &Stack) {
    if (Stack.empty()) {
        return;
    }
    
    int top = Stack.top();
    stack<int> temp;
    Stack.pop();
    sortStack(Stack);
    
    while (!Stack.empty() && Stack.top() >= top) {
        temp.push(Stack.top());
        Stack.pop();
    }
    
    Stack.push(top);
    
    while (!temp.empty()) {
        Stack.push(temp.top());
        temp.pop();
    }

    //sortedInsert(Stack, top);

    return;
}

int main(void) {
    stack<int> Stack;
    Stack.push(5);
    Stack.push(85);
    Stack.push(96);
    Stack.push(582);
    Stack.push(256);
    Stack.push(44);

    printStack(Stack);
    sortStack(Stack);
    printStack(Stack);
    
    return 0;
}
