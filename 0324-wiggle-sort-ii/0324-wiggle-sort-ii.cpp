class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v1;
        vector<int>v2;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            v1.push_back(nums[i]);
            v2.push_back(nums[j]);
            i++;
            j--;
        }
        if(i==j){
            v1.push_back(nums[i]);
        }
        sort(v1.rbegin(),v1.rend());
        sort(v2.rbegin(),v2.rend());
        int p=0;
        int q=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=v1[p];
                p++;
            }
            else{
                nums[i]=v2[q];
                q++;
            }
        }
    }
};