class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int>s1,s2,c;
        int cnt=0;
        vector<int>v(A.size(),0);
        for(int i=0;i<A.size();i++){
            if(!s1.count(A[i])){
                s1.insert(A[i]);
                if(c.count(A[i])){
                    cnt++;
                }
                else{
                    c.insert(A[i]);
                }
            }
            if(!s2.count(B[i])){
                s2.insert(B[i]);
                if(c.count(B[i])){
                    cnt++;
                }
                else{
                    c.insert(B[i]);
                }
            }
            v[i]=cnt;
        }
        return v;
    }
};