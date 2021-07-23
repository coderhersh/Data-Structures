#include <bits/stdc++.h>

using namespace std;

void print(int n) {
    if(n == 0) return;
    print(n-1);
    cout << n << "\n";
}

int main() {
    for (int i = 2; i < 100; i++) {
        for (int j = i; j < 100; j++) {
            if(j%i == 0) {
                
            }
        }
    }
    
    return 0;
}