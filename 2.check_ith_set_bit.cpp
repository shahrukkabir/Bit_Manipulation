
//check i th bit is set or not for binary representation of n

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cin >> n >> i;
                                                //Right Shift :  if (((n >> i) & 1) != 0)
    if (((n >> i) & 1) != 0) {
        cout << "Yes" << endl;                  //Left Shift  :   if ((n & (1 << i)) != 0)   
    } else {
        cout << "No" << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cin >> n >> i;

    if ((n & (1 << i)) != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
