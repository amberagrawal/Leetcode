class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>>ans;
        if(nums.size()==1){
                return nums;
        }
        vector<pair<int,int>> p;
      for(int i=0;i<nums.size();i++) {
          p.push_back({nums[i][0],nums[i][1]});
      } 
      sort(p.begin(),p.end());
      int prev=p[0].first,forw=p[0].second;
        for(int i=0;i<p.size()-1;i++){
           if(forw>=p[i+1].first){
            forw=max(forw,p[i+1].second);
           }
           else{
            ans.push_back({prev, forw});
            forw=p[i+1].second;
            prev=p[i+1].first;
           }
        }
        ans.push_back({prev, forw});
        return ans;
    }
};