class Solution {
public:
    int minSwaps(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){
                a++;
            }
            else{
                if(a>0){
                    a--;
                }
                else{
                    count++;
                }
            }
        }
        return (count+1)/2;
    }
};