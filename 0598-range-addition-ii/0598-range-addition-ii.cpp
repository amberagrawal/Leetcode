class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a=m;
        for(int i=0;i<ops.size();i++){
            a=min(a,ops[i][0]);
        }
        int b=n;
        for(int i=0;i<ops.size();i++){
            b=min(b,ops[i][1]);
        }
        return a*b;
    }
};