class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int maxi=0;
        for(int i=0;i<sentences.size();i++){
            string s=sentences[i];
            int count=0;
            for(int j=0;j<s.length();j++){
                if(s[j]==' '){
                    count++;
                }
            }
            maxi=max(maxi,count+1);
        }
        return maxi;
    }
};