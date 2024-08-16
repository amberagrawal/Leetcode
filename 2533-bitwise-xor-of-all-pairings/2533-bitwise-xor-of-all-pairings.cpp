class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=nums1.size();
        int m=nums2.size();
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            a=a^nums1[i];
        }
        for(int i=0;i<m;i++){
            b=b^nums2[i];
        }
        if(n%2==0&&m%2==0){
            return 0;
        }
        if(n%2==0&&m%2!=0){
            return a;
        }
        if(n%2!=0&&m%2==0){
            return b;
        }
        return a^b;
    }
};