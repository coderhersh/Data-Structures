#include <iostream>

using namespace std;

void ClearLastIBits(int n, int i) {
    int mask = -1 << i;
    n &= mask;
    cout << n << endl;
}

int main() {
    ClearLastIBits(7, 3);
    return 0;
}