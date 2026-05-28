class Solution {
public:
    bool hasAlternatingBits(int n) {
        int l=-1;
        while(n>0){
            int a=n%2;
            if(l==-1){
                l=a;
            }
            else{
                if(l==a){
                    return false;
                }
            }
            l=a;
            n=n/2;
        }
        return true;
    }
};