#include <iostream>

using namespace std;

void ClearRangeOfBits(int n, int a , int b) {
    int mask = (-1 << a) | ~(-1 << (b - 1));
    n &= mask;
    cout << n << endl;
}

int main() {
    ClearRangeOfBits(85, 6, 4);
    return 0;
}