#include<bits/stdc++.h>

using namespace std;

bool isPowerOfFour(int n) {
    int count = 0;
    
    while(n != 1) {

        if(n & 1 == 0) {
            count++;
        }
        
        n = n >> 1;
    }
    
    if(count % 2 == 0) {
        return true;
    }
    
    return false;
}