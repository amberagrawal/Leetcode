class Solution {
public:
    bool row[9][10] = {}, col[9][10] = {}, box[9][10] = {};

    void solveSudoku(vector<vector<char>>& mat) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(mat[i][j] != '.'){
                    int num = mat[i][j] - '0';
                    row[i][num] = true;
                    col[j][num] = true;
                    box[(i/3)*3 + j/3][num] = true;
                }
            }
        }
        solve(mat);
    }

    bool solve(vector<vector<char>>& mat){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(mat[i][j] == '.'){
                    for(int k = 1; k <= 9; k++){
                        int b = (i/3)*3 + j/3;
                        if(!row[i][k] && !col[j][k] && !box[b][k]){
                            mat[i][j] = k + '0';
                            row[i][k] = col[j][k] = box[b][k] = true;

                            if(solve(mat)) return true;

                            // Backtrack
                            mat[i][j] = '.';
                            row[i][k] = col[j][k] = box[b][k] = false;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
};
