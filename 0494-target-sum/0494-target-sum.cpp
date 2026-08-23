class Solution {
public:
    int f(int i, int t, vector<int>& nums,
          map<pair<int, int>, int>& dp) {

        if (i == nums.size()) {
            return t == 0;
        }

        if (dp.count({i, t})) {
            return dp[{i, t}];
        }

        int a = f(i + 1, t - nums[i], nums, dp);
        int b = f(i + 1, t + nums[i], nums, dp);

        return dp[{i, t}] = a + b;
    }

    int findTargetSumWays(vector<int>& nums, int t) {

        map<pair<int, int>, int> dp;

        return f(0, t, nums, dp);
    }
};