class Solution {
public:
    int minimumSum(int num) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>v;
        while(num>0){
            v.push_back(num%10);
            num=num/10;
        }
     sort(v.begin(),v.end());
     int a=v[0]*10+v[2];
     int b=v[1]*10+v[3];
     return a+b;   
    }
};