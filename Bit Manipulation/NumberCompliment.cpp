#include <iostream>

using namespace std;

int LeftMostBit(int n) {
    int count = 0;
    while(n != 0) {
        ++count;
        n >>= 1;
    }
    return count;
}

int NumberComplement(int num) {
    int left_most_bit_position = LeftMostBit(num);
    int mask = -1 << left_most_bit_position;
    return ~(num | mask);
}

int main() {
    int a = NumberComplement(5);
    int b = NumberComplement(1);
    cout << a << " " << b << endl;
    return 0;
}