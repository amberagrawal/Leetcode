class Solution {
public:
    int numberOfPairs(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i][0];
            int b=nums[i][1];
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                int c=nums[j][0];
                int d=nums[j][1];
                if(c<=a&&d>=b){
                    cout<<i<<" "<<j<<endl;
                bool ch=true;
                int minix=min(a,c);
                int maxix=max(a,c);
                int miniy=min(b,d);
                int maxiy=max(b,d);
                for(int k=0;k<nums.size();k++){
                    if(k!=j&&k!=i&&minix<=nums[k][0]&&nums[k][0]<=maxix&&miniy<=nums[k][1]&&nums[k][1]<=maxiy){
                        ch=false;
                    }
                }
                if(ch){
                    
                cnt++;
                }
                }
                }
            }
        }
        return cnt;
    }
};