#include <iostream>

using namespace std;

void CheckPowerOfTwo(int n) {
    n = n & n-1;
    if(n == 0) {
        cout << "Yes\n";
    }else {
        cout << "No\n";
    }
}

int main() {
    CheckPowerOfTwo(16);
    CheckPowerOfTwo(9);
    CheckPowerOfTwo(256);
    return 0;
}