class Solution {
public:
    int compareVersion(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.length()||j<t.length()){
            string a="";
            while(i<s.length()&&s[i]!='.'){
                a=a+s[i];
                i++;
            }
            if(a==""){
                a=a+'0';
            }
            string b="";
            while(j<t.length()&&t[j]!='.'){
                b=b+t[j];
                j++;
            }
            if(b==""){
                b=b+'0';
            }
            int x=stoi(a);
            int y=stoi(b);
            //cout<<x<<" "<<y<<endl;
            if(x<y){
                return -1;
            }
            else if(x>y){
                return 1;
            }
            i++;
            j++;
        }
        return 0;
    }
};