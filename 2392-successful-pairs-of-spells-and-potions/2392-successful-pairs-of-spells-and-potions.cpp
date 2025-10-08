class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long n) {
        sort(p.begin(),p.end());
        vector<int>v(s.size());
        for(int i=0;i<s.size();i++){
            int l=0;
            int r=p.size()-1;
            int idx=1e9;
            while(l<=r){
                int mid=l+(r-l)/2;
                if((long long)p[mid]*s[i]>=n){
                    idx=min(idx,mid);
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(idx==1e9){
                v[i]=0;
            }
            else{
                v[i]=p.size()-idx;
            }
        }
        return v;
    }
};