class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr1.size();i++){
            int a=arr1[i];
            while(a>0){
                mp[a]=1;
                a=a/10;
            }
        }
        int maxi=0;
        for(int i=0;i<arr2.size();i++){
            int a=arr2[i];
            while(a>0&&!mp.count(a)){
                a=a/10;
            }
            if(a>0){
                int len = to_string(abs(a)).length();
                maxi=max(maxi,len);
            }
        }
        return maxi;
    }
};