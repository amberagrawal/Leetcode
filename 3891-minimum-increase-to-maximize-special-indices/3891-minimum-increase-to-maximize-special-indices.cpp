class Solution {
public:
    long long minIncrease(vector<int>& nums) {
        int n = nums.size();

        // ODD case (same)
        if (n % 2 != 0) {
            long long total = 0;
            for (int i = 1; i < n - 1; i += 2) {
                int maxi = max(nums[i - 1], nums[i + 1]);
                total += max(0, maxi - nums[i] + 1);
            }
            return total;
        }

        vector<vector<long long>> dp(n + 2, vector<long long>(2, 0));

        for (int i = n - 2; i >= 1; i--) {
            int maxi = max(nums[i - 1], nums[i + 1]);
            long long cost = max(0, maxi - nums[i] + 1);

            // skipped already used
            dp[i][1] = cost + dp[i + 2][1];

            // skip not used yet
            dp[i][0] = min(
                cost + dp[i + 2][0], // take
                dp[i + 1][1]         // skip
            );
        }

        return dp[1][0];
    }
};