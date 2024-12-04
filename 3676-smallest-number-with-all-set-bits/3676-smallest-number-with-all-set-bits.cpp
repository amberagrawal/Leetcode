class Solution {
public:
    int smallestNumber(int n) {
        int count=0;
        while(n>0){
            n=n/2;
            count++;
        }
        int ans=0;
        for(int i=0;i<count;i++){
            ans=ans+pow(2,i);
        }
        return ans;
    }
};