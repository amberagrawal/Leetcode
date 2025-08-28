class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=r;
        vector<int>v;
        for(int i=0;i<r;i++){
            v.push_back(mat[i][i]);
        }
        sort(v.rbegin(),v.rend());
        int k=0;
        for(int i=0;i<r;i++){
            mat[i][i]=v[k++];
        }
        for(int i=1;i<r;i++){
            int r1=i;
            int c1=0;
            vector<int>v1;
            while(r1<r&&c1<c){
                v1.push_back(mat[r1][c1]);
                r1++;
                c1++;
            }
            sort(v1.rbegin(),v1.rend());
            int k=0;
            r1=i;
            c1=0;
             while(r1<r&&c1<c){
                mat[r1][c1]=v1[k++];
                r1++;
                c1++;
            }
        }
        for(int i=1;i<r;i++){
            int r1=0;
            int c1=i;
            vector<int>v1;
            while(r1<r&&c1<c){
                v1.push_back(mat[r1][c1]);
                r1++;
                c1++;
            }
            sort(v1.begin(),v1.end());
            int k=0;
            r1=0;
            c1=i;
             while(r1<r&&c1<c){
                mat[r1][c1]=v1[k++];
                r1++;
                c1++;
            }
        }
        return mat;
    }
};