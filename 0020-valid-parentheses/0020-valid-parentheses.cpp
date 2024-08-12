class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        // if(s.length()==1){
        //         return false;
        // }
        for(int i=0;i<s.length();i++){
            if(s1.empty()){
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                return false;
            }
            }
            if(!s1.empty()&&s[i]==')'&&s1.top()!='('){
                return false;
            }
            if(!s1.empty()&&s[i]=='}'&&s1.top()!='{'){
                return false;
            }
            if(!s1.empty()&&s[i]==']'&&s1.top()!='['){
                return false;
            }
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                s1.push(s[i]);
            }
            if(!s1.empty()&&s1.top()=='('&&s[i]==')'){
                s1.pop();
            }
            if(!s1.empty()&&s1.top()=='{'&&s[i]=='}'){
                s1.pop();
            }
            if(!s1.empty()&&s1.top()=='['&&s[i]==']'){
                s1.pop();
            }
        }
        if(s1.empty()){
        return true;
        }
        return false;
    }
};