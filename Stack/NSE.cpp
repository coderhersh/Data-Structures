#include <bits/stdc++.h>

using namespace std;

vector<int> NSE(vector<int> &arr) {
    vector<int> ans(arr.size(), -1);
    stack<int> s;
    s.push(arr.size() - 1);

    for (size_t i = arr.size() - 1; i >= 0; i--) {
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
    cout << "----------------";
    vector<int> ans = NSE(arr);
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
