class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        sort(costs.begin(),costs.end());
        int count=0;
        for(int i=0;i<costs.size();i++){
            if(costs[i]<=coins){
                count++;
                coins=coins-costs[i];
            }
            else{
                break;
            }
        }
        return count;
    }
};