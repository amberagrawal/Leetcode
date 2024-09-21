class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);  
      vector<vector<int>>mat(m,vector<int>(n,0));
     int a=0;
     if(m*n!=original.size()){
         mat.clear();
         return mat;
     }
     while(a<original.size()){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=original[a];
                a++;
            }
        }
     }
     return mat;
    }
};