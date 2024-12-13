class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long sum=0;
        int count=0;
        vector<bool>v(nums.size(),false);
        vector<pair<int,int>>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(make_pair(nums[i],i));
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(!v[arr[i].second]){
                sum=sum+arr[i].first;
                int a=arr[i].second;
                v[a]=true;
                if(a+1<nums.size()){
                v[a+1]=true;
                }
                if(a-1>=0){
                v[a-1]=true;
                }
            }
        }
        return sum;
    }
};