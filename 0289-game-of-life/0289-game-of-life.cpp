class Solution {
public:
    void gameOfLife(vector<vector<int>>& mat) {
        vector<vector<int>>v;
        v=mat;
        int r=mat.size();
        int c=mat[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int count=0;
                for(int p=max(0,i-1);p<min(r,i+2);p++){
                    for(int q=max(0,j-1);q<min(c,j+2);q++){
                        if(mat[p][q]==1){
                            count++;
                        }
                    }
                }
                if(mat[i][j]==1){
                    count--;
                }
                if(count==3){
                    v[i][j]=1;
                }
                else if(count<2||count>3){
                    v[i][j]=0;
                }
            }
        }
        mat=v;
    }
};