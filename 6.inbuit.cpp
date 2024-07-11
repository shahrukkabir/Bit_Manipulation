//Common Built-in Bit Manipulation Functions

// 1. __builtin_popcount : Counts the number of set bits.
// 2. __builtin_clz      : Counts the number of leading zeros.
// 3. __builtin_ctz      : Counts the number of trailing zeros. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int num = 2147483647;   // Example number (binary: 01111111 11111111 11111111 11111111)
    unsigned int num2 = 18;          // Example number (binary: 00000000 00000000 00000000 00010010)
    unsigned int num3 = 2147483648;  // Example number (binary: 10000000 00000000 00000000 00000000)

    int popcount = __builtin_popcount(num);
    cout << "Number of set bits in " << num << ": " << popcount << endl;

    int clz = __builtin_clz(num);
    cout << "Number of leading zeros in " << num << ": " << clz << endl;

    int ctz = __builtin_ctz(num3);
    cout << "Number of trailing zeros in " << num3 << ": " << ctz << endl;

    return 0;
}

/* 
    Number of set bits in 2147483647: 31
    Number of leading zeros in 2147483647: 1
    Number of trailing zeros in 2147483648: 31

*/