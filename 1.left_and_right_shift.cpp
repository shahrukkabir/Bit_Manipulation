#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i; 
    cin>>n>>i;
    
    // Left shift operation
    int resultLeft = n << i;
    cout << n << " << " << i << " = " << resultLeft << endl;

    // Right shift operation
    int resultRight = n >> i;
    cout << n << " >> " << i << " = " << resultRight << endl;

    return 0;
}

// n << i = n * ( 2 ^ i)
// n >> i = n / ( 2 ^ i)


/* 

      5     --->   1  0  1
 5 << 2     --->   1  0  1  0  0 (left)
 5 >> 2     --->         1       (right)


 */