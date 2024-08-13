class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()>b.length()){
            int count=a.length()-b.length();
            b.insert(0,count,'0');
        }
        if(b.length()>a.length()){
            int count=b.length()-a.length();
            a.insert(0,count,'0');
        }
        int i=a.length()-1;
        int carry=0;
        string s;
        while(i>0){
         if(a[i]==b[i]){
            if(a[i]=='1'){
                if(carry==0){
                    s.push_back('0');
                }
                else{
                    s.push_back('1');
                }
                carry=1;
            }
            else{
               if(carry==0){
                    s.push_back('0');
                }
                else{
                    s.push_back('1');
                }
                carry=0; 
            }
         }
         else{
             if(carry==0){
                    s.push_back('1');
                }
            else{
                    s.push_back('0');
            }
         }
         i--;
        }
        if(i==0){
            if(a[i]=='1'&&b[i]=='1'){
                if(carry==1){
                    s.push_back('1');
                    s.push_back('1');
                }
                else{
                    s.push_back('0');
                    s.push_back('1');
                }
            }
            else if(a[i]=='0'&&b[i]=='0'){
                if(carry==1){
                    s.push_back('1');
                }
                else{
                    s.push_back('0');
                }
            }
            else{
                if(carry==1){
                    s.push_back('0');
                    s.push_back('1');
                }
                else{
                    s.push_back('1');
                }
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};