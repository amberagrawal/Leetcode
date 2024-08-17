class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string a="";
        string b="";
        for(int i=0;i<word1.size();i++){
            string s=word1[i];
            a=a+s;
        }
        for(int i=0;i<word2.size();i++){
            string s=word2[i];
            b=b+s;
        }
        if(a==b){
            return true;
        }
        return false;
    }
};