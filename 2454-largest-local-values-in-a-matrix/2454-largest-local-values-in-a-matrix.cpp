class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
         vector<vector<int>>ans(row-2, vector<int>(col-2));
       for(int a=0;a<row-2;a++){
        for(int b=0;b<col-2;b++){
        int maxi=0;
        for(int i=a;i<a+3;i++){
            for(int j=b;j<b+3;j++){
              maxi=max(maxi,grid[i][j]);
            }
        }
        ans[a][b]=maxi;
        }
       }
       return ans;
    }
};