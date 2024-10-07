class Solution {
public:
    string bin(int a){
       string s="";
       while(a>0){
        s=to_string(a%2)+s;
        a=a/2;
       }
       return s;
    }
    int dec(string s){
        int a=0;
        int j=0;
        for(int i=s.length()-1;i>=0;i--){
            a=a+pow(2,j)*(s[i]-'0');
            j++;
        }
        return a;
    }
    int maxGoodNumber(vector<int>& nums) {
        string s1=bin(nums[0]);
        string s2=bin(nums[1]);
        string s3=bin(nums[2]);
        int a=dec(s1+s2+s3);
        int b=dec(s1+s3+s2);
        int c=dec(s2+s1+s3);
        int d=dec(s2+s3+s1);
        int e=dec(s3+s1+s2);
        int f=dec(s3+s2+s1);
        vector<int>v{a,b,c,d,e,f};
        sort(v.rbegin(),v.rend());
        return v[0];
    }
};