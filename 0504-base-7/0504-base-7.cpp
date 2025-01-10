class Solution {
public:
    string convertToBase7(int num) {
        string s="";
        int a=0;
        if(num<0){
            a=-1;
        }
        if(num==0){
            return "0";
        }
        num=abs(num);
        while(num>0){
            s=to_string(num%7)+s;
            num=num/7;
        }
        if(a==-1){
            s="-"+s;
        }
        return s;
    }
};