class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9&&i==0){
                digits[i]=0;
                digits.insert(digits.begin(),1);
                break;
            }
            if(digits[i]<9){
                digits[i]++;
                break;
            }
            else{
                digits[i]=0;
            }
        }
        return digits;
    }
};