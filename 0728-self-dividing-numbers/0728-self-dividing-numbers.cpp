class Solution {
public:
    bool check(int num){
        int b=num;
        while(num>0){
            int a=num%10;
            if(a==0){
                return false; 
            }
            if(b%a!=0){
             return false;
            }
            num=num/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
       vector<int>v;
       for(int i=left;i<=right;i++){
        if(check(i)){
            v.push_back(i);
        }
       } 
       return v;
    }
};