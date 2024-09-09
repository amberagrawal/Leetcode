class Solution {
public:
    string tobin(string s){
        long long a=stoi(s);
        string s1="";
        while(a>0){
            s1=s1+to_string(a%2);
            a=a/2;
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
    string convertDateToBinary(string date) {
        string s1=date.substr(0,4);
        string s2=date.substr(5,2);
        string s3=date.substr(8,2);
        string s4=tobin(s1)+"-"+tobin(s2)+"-"+tobin(s3);
     return s4;
    }
};