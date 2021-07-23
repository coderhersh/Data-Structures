#include <bits/stdc++.h>

using namespace std;

void print(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << "\n";
        s.pop();
    }
}

void deleteMiddleElement(stack<int> &s) {

}

int main() {
    stack<int> s;

    s.push(2);
    s.push(11);
    s.push(3);
    s.push(7);
    s.push(10);
    
    print(s);
    deleteMiddleElement(s);
    cout << "\n";
    print(s);
    
    return 0;
}