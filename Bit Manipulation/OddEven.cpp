#include <iostream>

using namespace std;

void returnOddEven(int n) {
    n = n & 1;
    if(n == 0) cout << "Even\n";
    else cout << "Odd\n";
}

int main() {
    returnOddEven(6);
    returnOddEven(7);
    return 0;
}