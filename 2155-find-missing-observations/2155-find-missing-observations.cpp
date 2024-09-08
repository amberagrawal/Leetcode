class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int sum=0;
        for(int i=0;i<rolls.size();i++){
            sum=sum+rolls[i];
        }
        int a=(mean*(rolls.size()+n))-sum;
        int num=a/n;
        int extra=a%n;
        vector<int>v;
        if((float)a/n>6||(float)a/n<1){
            return v;
        }
        for(int i=0;i<n;i++){
            if(extra>0){
                v.push_back(min(num+extra,6));
                if(num+extra>6){
                    extra=extra-(6-num);
                }
                else{
                    extra=0;
                }
            }
            else{
                v.push_back(num);
            }
        }
        return v;
    }
};