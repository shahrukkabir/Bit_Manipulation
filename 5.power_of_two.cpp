
bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int cnt=0;
        while(n){
            if(n&1!=0){
                cnt++;
            }
            n=n>>1;
        }
        if(cnt==1){
            return true;
        }
        else{
            return false;
        }
}

bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        return((n & (n-1))==0);
}