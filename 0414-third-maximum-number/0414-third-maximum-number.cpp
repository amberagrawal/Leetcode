class Solution {
public:
    int thirdMax(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        sort(nums.rbegin(),nums.rend());
        set<int>s(nums.begin(),nums.end());
        if(s.size()<3){
            return nums[0];
        }
        else{
            auto it = s.begin();
            advance(it, s.size()-3);
            return *it; 
        }
    }
};