class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            int index=-1;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    index=j;
                    break;
                }
            }
            if(index!=-1){
            for(int j=index+1;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    v[i]=nums2[j];
                    break;
                }
            }
            }
        }
        return v;
    }
};