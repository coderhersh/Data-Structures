#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char binarySum(char a, char b) {
        if(a == '0' && b == '0') {
            return '0';
        }else if(a == '1' && b == '1') {
            return '0';
        }
        return '1';
    }
    char binaryCarry(char a, char b) {
        if(a == '1' && b == '1') {
            return '1';
        }
        return '0';
    }
    string addBinary(string a, string b) {
        if(b.size() > a.size()) {
            swap(a, b);
        }
        
        string ans = "";
        reverse(b.begin(), b.end());
        reverse(a.begin(), a.end());



        reverse(ans.begin(), ans.end());
        return ans;
    }
};