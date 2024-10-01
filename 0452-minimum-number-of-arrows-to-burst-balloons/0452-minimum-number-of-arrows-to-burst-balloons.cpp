class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];  
        });
        if(points.size()==0){
            return 0;
        }
        int total=1;
        int a=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]>a){
                total++;
                a=points[i][1];
            }
        }
        return total;
    }
};