class Solution {
public:
    int prefixCount(vector<string>& nums, string pref) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            string s=nums[i];
            if(s.substr(0,pref.length())==pref){
                count++;
            }
        }
        return count;
    }
};