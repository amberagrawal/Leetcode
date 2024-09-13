class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int left=queries[i][0];
            int right=queries[i][1];
            int sol=0;
            for(int j=left;j<=right;j++){
                sol=sol^arr[j];
            }
            ans.push_back(sol);
        }
        return ans;
    }
};