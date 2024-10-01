class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>s;
        if(nums.empty()){
            return s;
        }
        int prev=nums[0];
        int forw=nums[0];
        if(nums.size()==1){
            s.push_back(to_string(forw));
            return s;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                forw=nums[i];
                if(i==nums.size()-1){
                   if(forw==prev){
                string s1=to_string(forw);
                s.push_back(s1);
                }
                else{
                string s1=to_string(prev)+"->"+to_string(forw);
                s.push_back(s1);
                }
                }
            }
            else{
                if(forw==prev){
                string s1=to_string(forw);
                s.push_back(s1);
                }
                else{
                string s1=to_string(prev)+"->"+to_string(forw);
                s.push_back(s1);
                }
                prev=nums[i];
                forw=nums[i];
                if(i==nums.size()-1){
                    string s1=to_string(forw);
                    s.push_back(s1);
                }
            }
        }
        return s;
    }
};