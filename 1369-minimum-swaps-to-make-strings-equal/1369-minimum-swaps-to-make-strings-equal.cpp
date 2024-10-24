class Solution {
public:
    int minimumSwap(string s1, string s2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<char,int>mp;
        for(int i=0;i<s1.length();i++){
            mp[s1[i]]++;
        }
        for(int i=0;i<s2.length();i++){
            mp[s2[i]]++;
        }
        for(auto i:mp){
            if(i.second%2!=0){
                return -1;
            }
        }
        if(s1.length()!=s2.length()){
            return -1;
        }
        int x=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='x'){
                x++;
            }
        }
        int count1=0;
        int count2=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='x'&&s2[i]=='y'){
                count1++;
            }
            else if(s1[i]=='y'&&s2[i]=='x'){
                count2++;
            }
        }
        int total=(count1/2)+(count2/2);
        int rem=(count1%2)+(count2%2);
        total=total+rem;
        return total;
    }
};