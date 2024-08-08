class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int m=nums1.size();
        int n=nums2.size();
        float newarr[m+n];
        for(int i=0;i<m;i++){
            newarr[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
           newarr[m+i]=nums2[i];
        }
        sort(newarr,newarr+(m+n));
        if((m+n)%2!=0){
            return newarr[(m+n)/2];
        }
        else{
            return (newarr[(m+n)/2]+newarr[(m+n)/2-1])/2;
        }
    }
};