#include <iostream>

using namespace std;

void ClearITHBit(int n, int i) {
    int mask = ~(1 << (i-1));
    n &= mask;
    cout << n << endl;
}

int main() {
    cout << 6 << endl;
    ClearITHBit(6, 3);
    return 0;
}