#include <bits/stdc++.h>

using namespace std;

void print(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << "\n";
        s.pop();
    }
}

void reverse(stack<int> &s) {
    if(s.empty()) {
        return;
    }
    
    int top = s.top();
    s.pop();
    reverse(s);
    vector<int> v;
    while (!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }
    v.push_back(top);
    while(!v.empty()) {
        s.push(v.back());
        v.pop_back();
    }
}

int main() {
    stack<int> s;

    s.push(2);
    s.push(11);
    s.push(3);
    s.push(7);
    s.push(10);
    
    print(s);
    reverse(s);
    cout << "\n";
    print(s);
    
    return 0;
}