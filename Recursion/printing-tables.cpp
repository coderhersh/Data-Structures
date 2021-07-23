#include <bits/stdc++.h>

using namespace std;

void table(int n, int m) {
    if(m == 0) {
        cout << n << " X " << m << " = " << 0 << "\n";
        return;
    }
    table(n, m-1);
    cout << n << " X " << m << " = " << n * m << "\n";
}

int main() {
    table(3, 10);
    return 0;
}