class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int>mp1;
        map<int,int>mp2;
        set<int>s;
        vector<int>v(A.size(),0);
        for(int i=0;i<A.size();i++){
            mp1[A[i]]++;
            if(mp1[A[i]]==mp2[A[i]]){
                s.insert(A[i]);
            }
            mp2[B[i]]++;
            if(mp1[B[i]]==mp2[B[i]]){
                s.insert(B[i]);
            }
            v[i]=s.size();
        }
        return v;
    }
};