#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define nl '\n'
typedef long long ll;

int main() {
    FAST
    int n, i;
    cin >> n >> i;

    n = n | (1 << i);
    cout << n << nl;

    return 0;
}
