class Solution {
public:
    bool check(int i,int j,int r,int c){
        return !(i<0||j<0||i>=r||j>=c);
    }
    int uniquePathsIII(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int si,sj,fr,fc;
        int tot = 0; 
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){ si=i; sj=j; }
                if(mat[i][j]==2){ fr=i; fc=j; }
                if(mat[i][j]!=-1) tot++; 
            }
        }
        int cnt=0;
        vector<int> vis(r*c,0);
        vis[si*c+sj] = 1;
        queue<tuple<int,int,vector<int>,int>> q; 
        q.push({si,sj,vis,1}); 
        while(!q.empty()){
            auto [i,j,v,s] = q.front(); 
            q.pop();
            if(i==fr && j==fc){
                if(s==tot) cnt++; 
                continue;
            }
            if(check(i-1,j,r,c) && mat[i-1][j]!=-1 && v[(i-1)*c+j]==0){
                v[(i-1)*c+j] = 1;
                q.push({i-1,j,v,s+1});
                v[(i-1)*c+j] = 0;
            }
            if(check(i+1,j,r,c) && mat[i+1][j]!=-1 && v[(i+1)*c+j]==0){
                v[(i+1)*c+j] = 1;
                q.push({i+1,j,v,s+1}); 
                v[(i+1)*c+j] = 0;
            }
            if(check(i,j-1,r,c) && mat[i][j-1]!=-1 && v[i*c+j-1]==0){
                v[i*c+j-1] = 1;
                q.push({i,j-1,v,s+1}); 
                v[i*c+j-1] = 0;
            }
            if(check(i,j+1,r,c) && mat[i][j+1]!=-1 && v[i*c+j+1]==0){
                v[i*c+j+1] = 1;
                q.push({i,j+1,v,s+1}); 
                v[i*c+j+1] = 0;
            }
        }
        return cnt;
    }
};
