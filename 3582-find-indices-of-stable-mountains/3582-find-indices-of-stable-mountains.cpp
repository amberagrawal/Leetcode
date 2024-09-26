class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);
       vector<int>v;
       for(int i=1;i<height.size();i++){
        if(height[i-1]>threshold){
            v.push_back(i);
        }
       } 
       return v;
    }
};