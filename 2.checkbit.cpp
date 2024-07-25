//check i th bit is set or not for binary representation of n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i; cin>>n>>i;
    if((n & (1<<i))==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}



// ((n & (1<<i))!=0)
// (((n >> i) & 1) != 0)
// ((n & (1 << i)) != 0) 

