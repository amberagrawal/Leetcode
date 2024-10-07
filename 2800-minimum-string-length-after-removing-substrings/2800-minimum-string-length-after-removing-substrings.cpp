class Solution {
public:
    int minLength(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        stack<char>s1;
        for(int i=0;i<s.length();i++){
            if(!s1.empty()&&s1.top()=='A'&&s[i]=='B'){
                s1.pop();
            }
            else if(!s1.empty()&&s1.top()=='C'&&s[i]=='D'){
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
        return s1.size();
    }
};