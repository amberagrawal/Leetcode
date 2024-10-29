class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9 + 7;
        vector<long long>v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        for(int i=0;i<t;i++){
            vector<long long>arr(26,0);
            for(int j=0;j<26;j++){
                if(j==25){
                    arr[0]=(arr[0]+v[25])%MOD;
                    arr[1]=(arr[1]+v[25])%MOD;
                }
                else{
                    arr[j+1]=(arr[j+1]+v[j])%MOD;
                }
            }
            v=arr;
        }
        long long count=0;
        for(int i=0;i<26;i++){
            count=(count+v[i])%MOD;
        }
        return count;
    }
};