class Solution {
public:
    bool check(int i,int j,int r,int c){
        if(i<0||j<0||i>=r||j>=c){
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int total=0;
        queue<pair<int,int>>q;
        vector<vector<int>>vis(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]!=0){
                    total++;
                }
                if(mat[i][j]==2){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        int cnt=0;
        int t=-1;
        while(!q.empty()){
            t++;
            int size=q.size();
            for(int k=0;k<size;k++){
                auto p=q.front();
                q.pop();
                int i=p.first;
                int j=p.second;
                cnt++;
                if(check(i-1,j,r,c)&&mat[i-1][j]==1&&!vis[i-1][j]){
                    q.push({i-1,j});
                    vis[i-1][j]=1;
                }
                if(check(i+1,j,r,c)&&mat[i+1][j]==1&&!vis[i+1][j]){
                    q.push({i+1,j});
                    vis[i+1][j]=1;
                }
                if(check(i,j-1,r,c)&&mat[i][j-1]==1&&!vis[i][j-1]){
                    q.push({i,j-1});
                    vis[i][j-1]=1;
                }
                if(check(i,j+1,r,c)&&mat[i][j+1]==1&&!vis[i][j+1]){
                    q.push({i,j+1});
                    vis[i][j+1]=1;
                }
            }
        }
        if(cnt==total){
            if(t==-1){
                return 0;
            }
            return t;
        }
        return -1;
    }
};