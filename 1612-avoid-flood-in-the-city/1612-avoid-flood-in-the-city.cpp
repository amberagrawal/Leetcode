class Solution {
public:
    vector<int> avoidFlood(vector<int>& nums) {
        set<int>s;
        map<int,int>mp;
        vector<int>v(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                s.insert(i);
            }
            else{
                if(mp.count(nums[i])){
                    int idx=mp[nums[i]];
                    auto it=s.upper_bound(idx);
                    if(it!=s.end()){
                        v[*it]=nums[i];
                        s.erase(*it);
                    }
                    else{
                        return {};
                    }
                }
            }
            mp[nums[i]]=i;
        }
        for(auto i:s){
            v[i]=1;
        }
        return v;
    }
};