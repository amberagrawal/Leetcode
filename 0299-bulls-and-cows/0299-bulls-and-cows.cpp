class Solution {
public:
    string getHint(string secret, string guess) {
        int cow=0;
        vector<int>v1(10,0);
        vector<int>v2(10,0);
        for(int i=0;i<secret.length();i++){
            v1[secret[i]-'0']++;
        }
        for(int i=0;i<guess.length();i++){
            v2[guess[i]-'0']++;
        }
        for(int i=0;i<10;i++){
            cow=cow+min(v1[i],v2[i]);
        }
        if(secret.length()<guess.length()){
            secret.append(guess.length()-secret.length(),'0');
        }
        if(secret.length()>guess.length()){
            guess.append(secret.length()-guess.length(),'0');
        }
        int bull=0;
        int count=0;
        for(int i=0;i<guess.length();i++){
            if(secret[i]!=0||guess[i]!=0){
                count++;
            }
            if(count!=0&&secret[i]==guess[i]){
                bull++;
            }
        }
        cow=cow-bull;
        string s=to_string(bull)+"A"+to_string(cow)+"B";
        return s;
    }
};