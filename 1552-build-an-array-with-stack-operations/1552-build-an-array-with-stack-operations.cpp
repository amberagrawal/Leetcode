class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>v;
        int a=0;
        int size=0;
        while(size<target.size()){
            for(int i=1;i<=n;i++){
                if (a >= target.size()) break;
                if(target[a]!=i){
                    v.push_back("Push");
                    v.push_back("Pop");
                }
                else{
                    size++;
                    v.push_back("Push");
                    a++;
                }
            }
        }
        return v;
    }
};