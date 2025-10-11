class Solution {
public:
    bool f(int i,int co,vector<vector<int>>&adj,vector<int>&c){
        c[i] = co; 
        for(int j=0;j<adj[i].size();j++){
            int v=adj[i][j];
            if(c[v] == -1){
                bool a=f(v, 1^co, adj, c);
                if(!a) return false; 
            } else if(c[v] == co){
                return false; 
            }
        }
        return true;
    }

    bool check(int mid,vector<vector<int>>&nums){
        int n = nums.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int d=abs(nums[i][0]-nums[j][0])+abs(nums[i][1]-nums[j][1]);
                if(d<mid){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int>c(n,-1);
        for(int i=0;i<n;i++){
            if(c[i]==-1){
                if(!f(i,0,adj,c)) return false;
            }
        }
        return true;
    }

    int maxPartitionFactor(vector<vector<int>>& nums) {
        int n = nums.size();
        if(n==2) return 0; 
        int r = INT_MAX;
        int l=0, maxi=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,nums)){
                maxi=max(maxi,mid);
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return maxi;
    }
};
