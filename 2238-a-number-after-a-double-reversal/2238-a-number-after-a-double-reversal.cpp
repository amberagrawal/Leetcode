class Solution {
public:
    bool isSameAfterReversals(int num) {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     if(num==0){
        return true;
     }   
     else if(num%10==0){
        return false;
     }
     return true;
    }
};