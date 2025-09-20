class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int>v;
        set<int>s(nums.begin(),nums.end());
        for (auto it = s.rbegin(); it != s.rend(); ++it){
            v.push_back(*it);
            if(v.size()==k){
                break;
            }
        }
        return v;
    }
};