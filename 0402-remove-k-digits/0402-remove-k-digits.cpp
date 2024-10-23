class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>s;
        s.push(num[0]);
        if(num.length()<=k){
            return "0";
        }
        if(k==0){
            return num;
        }
        for(int i=1;i<num.length();i++){
            while(k>0&&!s.empty()&&num[i]<s.top()){
                s.pop();
                k--;
            }
            s.push(num[i]);
            if(s.size()==1&&num[i]=='0'){
                s.pop();
            }
        }
        while(k>0&&!s.empty()){
            s.pop();
            k--;
        }
        string s1;
        while(!s.empty()){
            s1.push_back(s.top());
            s.pop();
        }
        reverse(s1.begin(),s1.end());
        if(s1.length()==0){
            return "0";
        }
        return s1;
    }
};