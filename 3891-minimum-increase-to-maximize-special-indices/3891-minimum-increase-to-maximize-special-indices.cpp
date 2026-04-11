class Solution {
public:
    int n;
    vector<vector<long long>> dp;

    long long solve(int i, int skipped, vector<int>& nums) {
        if (i >= n - 1) return 0;

        if (dp[i][skipped] != -1) return dp[i][skipped];

        int maxi = max(nums[i - 1], nums[i + 1]);
        long long cost = max(0, maxi - nums[i] + 1);

        long long ans;

        ans = cost + solve(i + 2, skipped, nums);

        if (skipped == 0) {
            ans = min(ans, solve(i + 1, 1, nums));
        }

        return dp[i][skipped] = ans;
    }

    long long minIncrease(vector<int>& nums) {
        n = nums.size();
        if (n % 2 != 0) {
            long long total = 0;
            for (int i = 1; i < n - 1; i += 2) {
                int maxi = max(nums[i - 1], nums[i + 1]);
                total += max(0, maxi - nums[i] + 1);
            }
            return total;
        }

        dp.assign(n, vector<long long>(2, -1));

        return solve(1, 0, nums);
    }
};