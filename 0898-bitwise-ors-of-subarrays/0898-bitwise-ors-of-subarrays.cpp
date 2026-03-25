class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>s;
        unordered_set<int>curr;
        curr.insert(0);
        s.insert(0);
        bool a=false;
        for(int i=0;i<arr.size();i++){
            auto temp=curr;
            unordered_set<int>ne;
            ne.insert(0);
            for(auto x:temp){
                if((x|arr[i])==0){
                    a=true;
                }
                s.insert(x|arr[i]);
                ne.insert(x|arr[i]);
            }
            curr=ne;
        }
        if(a){
        return s.size();
        }
        return s.size()-1;
    }
};