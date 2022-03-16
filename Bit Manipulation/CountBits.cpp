#include <iostream>

using namespace std;

int main() {
    int n = 7, count = 0;

    while(n != 0) {
        
        if(n & 1 != 0) {
            count++;
        }

        n >>= 1;
    }

    cout << count << endl;

    return 0;
}