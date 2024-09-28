class Solution {
public:
    int trailingZeroes(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int count=0;
        while(n>0){
            count=count+n/5;
            n=n/5;
        }
        return count;
    }
};