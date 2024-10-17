class Solution {
public:
    int maximumSwap(int num) {
       string s=to_string(num);
       for(int i=0;i<s.length();i++){
        int a=s[i]-'0';
        int maxi=a;
        int index=i;
        for(int j=i+1;j<s.length();j++){
            if(s[j]-'0'>a){
                maxi=max(maxi,s[j]-'0');
                if(maxi==s[j]-'0'){
                index=j;
                }
            }
        }
        if(index!=i){
            swap(s[i],s[index]);
            return stoi(s);
        }
       } 
       return stoi(s);
    }
};