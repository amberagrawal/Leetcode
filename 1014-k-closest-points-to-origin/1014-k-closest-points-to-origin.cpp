class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         multimap<double, int> mp;
        int n=points.size();
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            double dist=(sqrt(pow(x,2)+pow(y,2)));
            mp.insert({dist,i});
        }
        vector<vector<int>>v;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(k>0){
                int index=i->second;
              v.push_back({points[index][0],points[index][1]});
              k--;
            }
            if(k==0){
                return v;
            }
        }
        return v;
    }
};