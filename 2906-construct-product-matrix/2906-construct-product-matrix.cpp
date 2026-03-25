class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int mod = 12345;
        vector<vector<int>> v(r, vector<int>(c, 1));
        long long total = 1;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                v[i][j] = total;
                total = (total * mat[i][j]) % mod;
            }
        }
        total = 1;
        for(int i = r-1; i >= 0; i--){
            for(int j = c-1; j >= 0; j--){
                v[i][j] = (v[i][j] * total) % mod;
                total = (total * mat[i][j]) % mod;
            }
        }

        return v;
    }
};