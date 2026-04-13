class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]){
                    v[i]++;
                }
            }
        }
        return v;
    }
};