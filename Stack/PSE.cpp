#include <bits/stdc++.h>

using namespace std;

vector<int> PSE(vector<int> &arr) {
    vector<int> ans(arr.size(), -1);
    stack<int> s;
    s.push(0);

    for (size_t i = 1; i < arr.size(); i++) {
        while ((!s.empty()) && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            ans[i] = s.top();
        }
        s.push(i);
    }
    
    return ans;
}

int main() {
    vector<int> arr = {2,1,5,6,2,3};
    vector<int> ans = PSE(arr);
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
