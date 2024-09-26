class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mp;
        int a=0;
        while(a!=1){
            a=0;
            while(n>0){
            a=a+(n%10)*(n%10);
            n=n/10;
            }
            n=a;
            mp[n]++;
            if(mp[n]==2){
                return false;
            }
            if(a==1){
                return true;
            }
        }
        return false;
    }
};