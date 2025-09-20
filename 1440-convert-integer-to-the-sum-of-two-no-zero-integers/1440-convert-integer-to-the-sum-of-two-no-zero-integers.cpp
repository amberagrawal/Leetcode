class Solution {
public:
    bool check(int a){
        while(a>0){
            if(a%10==0){
                return false;
            }
            a=a/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int a=1;
        int b=n-1;
        while(!check(a)||!check(b)){
            a++;
            b--;
        }    
        return {a,b};
    }
};