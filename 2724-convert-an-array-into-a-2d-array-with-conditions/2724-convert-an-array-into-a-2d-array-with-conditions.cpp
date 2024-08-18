class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
       vector<vector<int>>ans;
       map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
       }
       while(!mp.empty()){
        vector<int>output;
       for(auto i=mp.begin();i!=mp.end();){    
        if(i->second>0){
        output.push_back(i->first);
        i->second--;
        }
        if (i->second == 0) {
         i=mp.erase(i);
        }
        else{
            i++;
        }
       }
       ans.push_back(output);
       output.clear();
       }
       return ans;
    }
};