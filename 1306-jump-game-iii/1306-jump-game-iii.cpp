class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<int>vis(arr.size(),0);
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int a=q.front();
            q.pop();
            if(arr[a]==0){
                return true;
            }
            int curr=arr[a];
            if(a-curr>=0&&vis[a-curr]==0){
                vis[a-curr]=1;
                q.push(a-curr);
            }
            if(a+curr<arr.size()&&vis[a+curr]==0){
                vis[a+curr]=1;
                q.push(a+curr);
            }
        }
        return false;
    }
};