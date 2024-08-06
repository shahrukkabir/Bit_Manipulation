#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, i;
    cin >> n >> i;

    n = n | (1 << i);  //set bit
    cout << n << endl;

    return 0;
}

// Set Bit   :  num = num | (1 << position)
// Unset Bit :  num = num & ~(1 << position)
// Flit bit  :  num = num ^ (1 << position)


