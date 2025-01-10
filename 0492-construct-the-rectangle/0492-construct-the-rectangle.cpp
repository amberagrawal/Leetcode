class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>v;
        for(int i=1;i<=sqrt(area);i++){
            if(area%i==0){
                v.push_back(i);
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        vector<int>ans(2,0);
        int diff=INT_MAX;
        for(int i=0;i<v.size();i++){
            if(diff>abs(v[i]-area/v[i])){
                ans[0]=v[i];
                ans[1]=area/v[i];
                diff=abs(v[i]-area/v[i]);
            }
        }
        sort(ans.rbegin(),ans.rend());
        return ans;
    }
};