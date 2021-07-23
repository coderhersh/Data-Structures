#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &v) {
    for (auto i : v)
        cout << i << " ";
    cout << "\n";
}

void Sort(vector<int> &v) {
    if(v.size() == 0) 
        return;
    
    int back = v.back();
    v.pop_back();
    Sort(v);
    v.push_back(back);
    sort(v.begin(), v.end());
}

int main() {
    vector<int> v = {11, 7, 3, 2, 31, 1, 6, 45, -6};
    print(v);
    Sort(v);
    print(v);
    return 0;
}