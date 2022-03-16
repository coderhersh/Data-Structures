#include <iostream>

using namespace std;

void SetITHBit(int n, int i, int bit) {
    if(bit == 0){
        int mask = ~(1 << (i - 1));
        n &= mask;
        cout << n << endl;
    }else{
        int mask = 1 << (i - 1);
        n |= mask;
        cout << n << endl;
    }
}

int main() {
    cout << 6 << endl;
    SetITHBit(6, 3, 0);
    SetITHBit(6, 8, 1);
    return 0;
}