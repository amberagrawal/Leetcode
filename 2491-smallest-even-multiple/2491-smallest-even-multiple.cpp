class Solution {
public:
    int smallestEvenMultiple(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(n%2==0){
            return n;
        }
        return n*2;
    }
};