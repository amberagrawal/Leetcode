class Solution {
public:
    long long minTime(vector<int>& w, vector<int>& p) {
        long long r=p.size();
        long long c=w.size();
        vector<vector<long long>>v(r,vector<long long>(c,0));
        for(long long i=0;i<r;i++){
            for(long long j=0;j<c;j++){
                v[i][j]=p[i]*w[j];
            }
        }
        vector<long long>dp(c,0);
        dp[0]=v[0][0];
        for(long long i=1;i<c;i++){
            dp[i]=dp[i-1]+v[0][i];
        }
        for(long long i=1;i<r;i++){
            vector<long long>a(c,0);
            long long maxi=0;
            for(long long j=0;j<c;j++){
                a[j]=dp[j]+v[i][j];
            }
            maxi=a[0];
            long long b=0;
            for(long long j=1;j<c;j++){
                b=b+v[i][j];
                maxi=max(maxi,a[j]-b);
            }
            dp[0]=maxi;
            for(long long j=1;j<c;j++){
                dp[j]=dp[j-1]+v[i][j];
            }
        }
        return dp[c-1];
    }
};