class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& arr) {
        int maxi=arr[0][1];
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++){
            maxi=max(maxi,arr[i][1]-arr[i-1][1]);
        }
        if(arr[0][1]==maxi){
            mini=arr[0][0];
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i][1]-arr[i-1][1]==maxi){
                mini=min(mini,arr[i][0]);
            }
        }
        return mini;
    }
};