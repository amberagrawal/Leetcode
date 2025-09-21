class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        vector<vector<int>>dp(r,vector<int>(c,0));
        for(int i=0;i<c;i++){
            dp[0][i]=mat[0][i];
        }
        for(int i=1;i<r;i++){
            for(int j=0;j<c;j++){
                dp[i][j]=mat[i][j];
                int a=dp[i-1][j];
                if(j-1>=0){
                    a=min(a,dp[i-1][j-1]);
                }
                if(j+1<c){
                    a=min(a,dp[i-1][j+1]);
                }
                dp[i][j]+=a;
            }
        }
        int maxi=1e9;
        for(int i=0;i<c;i++){
            maxi=min(maxi,dp[r-1][i]);
        }
        return maxi;
    }
};