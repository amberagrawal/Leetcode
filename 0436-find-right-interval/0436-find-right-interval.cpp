class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int>v;
        for(int i=0;i<intervals.size();i++){
            int mini=INT_MAX;
            int index=-1;
            for(int j=0;j<intervals.size();j++){
                if(intervals[j][0]>=intervals[i][1]){
                    if(mini>intervals[j][0]){
                        mini=intervals[j][0];
                        index=j;
                    }
                }
            }
            v.push_back(index);
        }
        return v;
    }
};