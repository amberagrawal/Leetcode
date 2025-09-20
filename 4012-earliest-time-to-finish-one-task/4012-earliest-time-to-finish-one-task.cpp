class Solution {
public:
    int earliestTime(vector<vector<int>>& arr) {
        int mini=1e9;
        for(int i=0;i<arr.size();i++){
            mini=min(mini,arr[i][1]+arr[i][0]);
        }
        return mini;
    }
};