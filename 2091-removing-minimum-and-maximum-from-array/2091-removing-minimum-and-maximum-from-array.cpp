class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        map<int,int>mp;
        int a=1e9;
        int b=-1e9;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
            a=min(a,nums[i]);
            b=max(b,nums[i]);
        }
        int idx1=mp[a]+1;
        int idx2=mp[b]+1;
        int idx3=nums.size()-mp[a];
        int idx4=nums.size()-mp[b];
        cout<<idx1<<" "<<idx2<<" "<<idx3<<" "<<idx4;
        if(idx1<idx2){
            cout<<1;
            return min({idx1+idx4,idx2,idx3});
        }
        else{
            return min({idx2+idx3,idx1,idx4}); 
        }
    }
};