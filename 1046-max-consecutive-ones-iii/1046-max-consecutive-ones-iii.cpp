class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int>pre(nums.size());
        if(nums[0]==0){
            pre[0]=1;
        }
        else{
            pre[0]=0;
        }
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1];
            if(nums[i]==0){
                pre[i]++;
            }
        }
        int maxi=0;
        int i=0;
        while(i<nums.size()){
            int j=nums.size()-1;
            while(j>=i){
                if(nums[i]==0){
                if(pre[j]-pre[i]+1<=k){
                    maxi=max(maxi,j-i+1);
                    break;
                }
                }
                else{
                  if(pre[j]-pre[i]<=k){
                    maxi=max(maxi,j-i+1);
                    break;
                }  
                }
                j--;
            }
            i++;
        }
        return maxi;
    }
};