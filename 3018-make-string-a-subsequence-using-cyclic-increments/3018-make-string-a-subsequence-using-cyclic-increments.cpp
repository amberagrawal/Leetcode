class Solution {
public:
    bool canMakeSubsequence(string s1, string s2) {
        int i=0;
        int j=0;
        int a=0;
        int count=0;
        while(j<s2.length()&&i<s1.length()){
            if(j==s2.length()-1){
                if(a==0){
                    if(s1[i]==s2[j]){
                        return true;
                    }
                    else if(s1[i]=='z'&&s2[j]=='a'){
                        return true;
                    }
                    else if(s1[i]+1==s2[j]){
                        return true;
                    }
                    else{
                        i++;
                    }
                }
                else if(a==1){
                    if(s1[i]=='z'&&s2[j]=='a'){
                        return true;
                    }
                    else if(count<=1&&s1[i]==s2[j]){
                        return true;
                    }
                    else if(s1[i]+1==s2[j]){
                        return true;
                    }
                    else{
                        i++;
                    }
                }
            }
            else{
                if(a==0){
                if(s1[i]==s2[j]){
                    i++;
                    j++;
                }
                else if(s1[i]=='z'&&s2[j]=='a'){
                    i++;
                    j++;
                    if(count==0){
                    a=1;
                    }
                }
                else if(s1[i]+1==s2[j]){
                    i++;
                    j++;
                    if(count==0){
                    a=1;
                    }
                }
                else{
                    i++;
                }
            }
            else if(a==1){
                if(s1[i]=='z'&&s2[j]=='a'){
                    i++;
                    j++;
                }
                else if(s1[i]+1==s2[j]){
                    i++;
                    j++;
                }
                else if(count<=1&&s1[i]==s2[j]){
                    i++;
                    j++;
                    a=0;
                    count++;
                }
                else{
                    i++;
                }
            }
            }
        }
        return false;
    }
};