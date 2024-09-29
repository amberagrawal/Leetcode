class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        vector<int>v;
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        if(s1.size()<s2.size()){
            for(auto i:s1){
                int num=i;
                int count=min(mp1[num],mp2[num]);
                v.insert(v.begin(),count,num);
            }
        }
        else{
            for(auto i:s2){
                int num=i;
                int count=min(mp1[num],mp2[num]);
                v.insert(v.begin(),count,num);
            }
        }
        return v;
    }
};