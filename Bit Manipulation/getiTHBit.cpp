#include<iostream>

using namespace std;

void getIthBit(int n, int i) {
    int mask = 1 << (i - 1);
    n &= mask;
    if(n == 0) cout << "0\n";
    else cout << "1\n";
}

int main() {
    getIthBit(6, 3);
    getIthBit(6, 7);
    return 0;
}