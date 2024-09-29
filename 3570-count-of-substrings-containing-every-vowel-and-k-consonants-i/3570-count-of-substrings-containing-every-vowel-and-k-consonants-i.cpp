class Solution {
public:
    int countOfSubstrings(string word, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int count=0;
        for(int it=0;it<word.length();it++){
            int a=0;
            int e=0;
            int i=0;
            int o=0;
            int u=0;
            int c=0;
            for(int j=it;j<word.length();j++){
                if(word[j]=='a'){
                    a++;
                }
                else if(word[j]=='e'){
                    e++;
                }
                else if(word[j]=='i'){
                    i++;
                }
                else if(word[j]=='o'){
                    o++;
                }
                else if(word[j]=='u'){
                    u++;
                }
                else{
                    c++;
                }
                if(a>0&&e>0&&i>0&&o>0&&u>0&&c==k){
                count++;
                }
            }
        }
        return count;
    }
};