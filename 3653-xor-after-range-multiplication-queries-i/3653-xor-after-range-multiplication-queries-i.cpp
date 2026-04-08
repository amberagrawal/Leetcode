class Solution {
public:
    const int mod=1e9+7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        for(long long i=0;i<q.size();i++){
            long long l=q[i][0];
            long long r=q[i][1];
            long long k=q[i][2];
            long long v=q[i][3];
            for(long long j=l;j<=r;j=j+k){
                nums[j]=(nums[j]*v)%mod;
            }
        }
        long long x=0;
        for(long long i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        return x;
    }
};