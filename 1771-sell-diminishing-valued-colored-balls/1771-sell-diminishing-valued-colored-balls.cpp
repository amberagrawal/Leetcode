class Solution {
public:
    const int MOD = 1e9 + 7;
    
    int maxProfit(vector<int>& inventory, int orders) {
        sort(inventory.rbegin(), inventory.rend()); 
        inventory.push_back(0); 
        long long profit = 0;
        int n = inventory.size();
        for(int i = 0; i < n - 1 && orders > 0; i++) {
            long long cur = inventory[i];
            long long next = inventory[i + 1];
            long long count = i + 1;
            long long total = (cur - next) * count; 
            if (orders >= total) {
                long long sum = ((cur + next + 1) * (cur - next) / 2) % MOD;
                profit = (profit + sum * count) % MOD;
                orders -= total;
            } else {
                long long full = orders / count;
                long long rem = orders % count;
                long long sum = ((cur + cur - full + 1) * full / 2) % MOD;
                profit = (profit + sum * count) % MOD;
                profit = (profit + rem * (cur - full)) % MOD;
                orders = 0;
            }
        }
        return profit;
    }
};
