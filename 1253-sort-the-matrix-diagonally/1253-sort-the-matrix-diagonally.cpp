class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        for(int i=0;i<c;i++){
            int a=0;
            int b=i;
            vector<int>v;
            while(a<r&&b<c){
                v.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(v.begin(),v.end());
            int j=0;
            a=0;
            b=i;
            while(a<r&&b<c){
                mat[a][b]=v[j++];
                a++;
                b++;
            }
        }
        for(int i=0;i<r;i++){
            int a=i;
            int b=0;
            vector<int>v;
            while(a<r&&b<c){
                v.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(v.begin(),v.end());
            int j=0;
            a=i;
            b=0;
            while(a<r&&b<c){
                mat[a][b]=v[j++];
                a++;
                b++;
            }
        }
        return mat;
    }
};