class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.rbegin(),v.rend());
        int j=1;
        vector<string>ans(nums.size(),"0");
        for(int i=0;i<v.size();i++){
            if(j==1){
              ans[v[i].second]="Gold Medal";
            }
            if(j==2){
              ans[v[i].second]="Silver Medal";
            }
            if(j==3){
              ans[v[i].second]="Bronze Medal"; 
            }
            if(j>3){
            ans[v[i].second]=to_string(j);
            }
            j++;
        }
        return ans;
    }
};