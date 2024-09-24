class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        set<int>s;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                  s.insert(nums1[i]);
                }
            }
        }
        vector<int>v;
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};