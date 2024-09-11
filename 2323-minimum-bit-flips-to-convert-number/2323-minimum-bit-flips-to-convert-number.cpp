class Solution {
public:
    int minBitFlips(int start, int goal) {
        string s1="";
        string s2="";
        while(start>0){
            s1=s1+to_string(start%2);
            start=start/2;
        }
        while(goal>0){
            s2=s2+to_string(goal%2);
            goal=goal/2;
        }
        if(s1.length()<s2.length()){
            int len=s2.length()-s1.length();
            s1.append(len,'0');
        }
        else if(s1.length()>s2.length()){
            int len=s1.length()-s2.length();
            s2.append(len,'0');
        }
        int mini=0;
        for(int i=0;i<max(s1.length(),s2.length());i++){
            if(s1[i]!=s2[i]){
                mini++;
            }
        }
        return mini;
    }
};