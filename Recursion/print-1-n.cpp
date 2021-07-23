#include <bits/stdc++.h>

using namespace std;

void print(int n) {
    if(n == 0) return;
    print(n-1);
    cout << n << "\n";
}

int main() {
    print(9);
    return 0;
}