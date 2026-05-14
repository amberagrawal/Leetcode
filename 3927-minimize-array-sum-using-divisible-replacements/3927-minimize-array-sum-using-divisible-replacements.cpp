class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            int mini=nums[i];
            for(int j=1;j*j<=nums[i];j++){
                int a=j;
                int b=nums[i]/j;
                if(nums[i]%j==0){
                    if(s.count(j)){
                        mini=min(mini,j);
                    }
                    if(s.count(b)){
                        mini=min(mini,b);
                    }
                }
            }
            nums[i]=mini;
        }
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        return sum;
    }
};