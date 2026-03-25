class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& mat) {
        long long r=mat.size();
        long long c=mat[0].size();
        vector<long long>prer(r,0);
        vector<long long>prec(c,0);
        for(long long i=0;i<r;i++){
            long long cnt=0;
            for(long long j=0;j<c;j++){
                cnt+=mat[i][j];
            }
            long long prev=0;
            if(i>0){
                prev=prer[i-1];
            }
            prer[i]=prev+cnt;
        }
        for(long long i=0;i<c;i++){
            long long cnt=0;
            for(long long j=0;j<r;j++){
                cnt+=mat[j][i];
            }
            long long prev=0;
            if(i>0){
                prev=prec[i-1];
            }
            prec[i]=prev+cnt;
        }
        for(long long i=0;i<r-1;i++){
            if(prer[i]==prer[r-1]-prer[i]){
                return true;
            }
        }
        for(long long i=0;i<c-1;i++){
            if(prec[i]==prec[c-1]-prec[i]){
                return true;
            }
        }
        return false;
    }
};