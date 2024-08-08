class Solution {
public:
    string convert(string s, int row) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int col=s.length();
        if(row<=1){
            return s;
        }
        vector<vector<char>>v(row,vector<char>(col,'0'));
        int a=0;
        int b=0;
        int dir=1;
            for(int i=0;i<s.length();i++){
            v[a][b]=s[i];
            if (dir == 1) { 
                if (a < row - 1) {
                    a++;
                } else {
                    dir = -1;
                    a--;
                    b++;
                }
            } else { 
                if (a > 0) {
                    a--;
                    b++;
                } else {
                    dir = 1;
                    a++;
                }
            }
            }
       string s1;
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(v[i][j]!='0'){
            s1.push_back(v[i][j]);
            }
        }
       }
       return s1;
    }
};