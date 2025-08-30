class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& mat) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(mat[i][j] != '.'){ 
                    char ch = mat[i][j];
                    for(int a = 0; a < 9; a++){
                        if(a != j && mat[i][a] == ch) return false; 
                        if(a != i && mat[a][j] == ch) return false; 
                    }
                    int startRow = (i / 3) * 3;
                    int startCol = (j / 3) * 3;
                    for(int row = startRow; row < startRow + 3; row++){
                        for(int col = startCol; col < startCol + 3; col++){
                            if((row != i || col != j) && mat[row][col] == ch)
                                return false; 
                        }
                    }
                }
            }
        }
        return true;
    }
};
