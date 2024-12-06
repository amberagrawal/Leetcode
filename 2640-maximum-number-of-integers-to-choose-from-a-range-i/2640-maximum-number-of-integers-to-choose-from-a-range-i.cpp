class Solution {
public:
    int maxCount(vector<int>& arr, int n, int maxSum) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=-1;
        }
        int sum=0;
        int count=0;
        int i=1;
        while(sum+i<=maxSum&&i<=n){
            if(mp[i]!=-1){
                sum=sum+i;
                count++;
            }
            i++;
        }
        return count;
    }
};