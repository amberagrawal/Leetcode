class Spreadsheet {
public:
    vector<vector<int>> mat; 
    Spreadsheet(int rows) {
        mat.resize(rows, vector<int>(26, 0)); 
    }
    void setCell(string s, int val) {
        int c = s[0] - 'A';
        int r = stoi(s.substr(1)) - 1;
        mat[r][c] = val;
    }
    void resetCell(string cell) {
        int c = cell[0] - 'A'; 
        int r = stoi(cell.substr(1)) - 1;
        mat[r][c] = 0;
    }
    int getValue(string formula) {
        if (formula[0] != '=') return stoi(formula);
        
        formula = formula.substr(1);
        size_t plusPos = formula.find('+');
        string X = formula.substr(0, plusPos);
        string Y = formula.substr(plusPos + 1);
        int a = 0, b = 0;
        if (isdigit(X[0])) {
            a = stoi(X);
        } else {
            int c = X[0] - 'A';
            int r = stoi(X.substr(1)) - 1;
            a = mat[r][c];
        }
        if (isdigit(Y[0])) {
            b = stoi(Y);
        } else {
            int c = Y[0] - 'A';
            int r = stoi(Y.substr(1)) - 1;
            b = mat[r][c];
        }
        return a + b;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */
