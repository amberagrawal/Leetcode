class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);
       int global_max = arrays[0].back();
       int global_min = arrays[0].front();
       int max_distance = 0;

       for(int i = 1; i < arrays.size(); i++){
           int curr_max = arrays[i].back();
           int curr_min = arrays[i].front();
           max_distance = max(max_distance, max(abs(curr_max - global_min), abs(global_max - curr_min)));
           global_max = max(global_max, curr_max);
           global_min = min(global_min, curr_min);
       }
       
       return max_distance;
    }
};
