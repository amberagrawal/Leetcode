class Solution {
public:
    bool check(int n){
        if(n==1){
            return true;
        }
        else if(n%2!=0){
            return false;
        }
        int ans=check(n/2);
        return ans;
    }
    bool isPowerOfTwo(int n) {
        if(n!=1&&n%10!=2&&n%10!=4&&n%10!=6&&n%10!=8){
            return false;
        }
        if(check(n)){
            return true;
        }
        return false;
    }
};