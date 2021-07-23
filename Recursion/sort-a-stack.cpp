#include <bits/stdc++.h>

using namespace std;

void print(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << "\n";
        s.pop();
    }
}

void Sort(stack<int> &s) {
    if(s.empty()) 
        return;
    
    int element = s.top();
    s.pop();
    Sort(s);
    
    vector<int> v;
    while (!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }
    v.push_back(element);
    
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end(); ++it) {
        s.push(*it);
    }        
}

int main(void) {
    stack<int> s;

    s.push(2);
    s.push(11);
    s.push(3);
    s.push(7);
    s.push(10);
    
    print(s);
    Sort(s);
    cout << "\n";
    print(s);
    
    return 0;
}