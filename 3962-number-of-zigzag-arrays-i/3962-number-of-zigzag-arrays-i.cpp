class Solution {
public:
    const int mod = 1e9+7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        // dp[idx][dir]: number of arrays ending at value (l+idx), dir = 0=down, 1=up
        vector<vector<int>> dp(m, vector<int>(2, 0)), newdp(m, vector<int>(2, 0));

        // Base case: sequences of length 2
        for (int x = 0; x < m; x++) {
            for (int y = 0; y < m; y++) {
                if (x == y) continue;
                if (x < y) dp[y][1] = (dp[y][1] + 1) % mod; // last step up
                else dp[y][0] = (dp[y][0] + 1) % mod;       // last step down
            }
        }

        // Extend sequences up to length n
        for (int len = 3; len <= n; len++) {
            vector<long long> pref(m+1,0), suff(m+2,0);

            // prefix sums of dp[*][0]
            for (int y = 0; y < m; y++) {
                pref[y+1] = (pref[y] + dp[y][0]) % mod;
            }
            // suffix sums of dp[*][1]
            for (int y = m-1; y >= 0; y--) {
                suff[y] = (suff[y+1] + dp[y][1]) % mod;
            }

            for (int z = 0; z < m; z++) {
                // last step was up → must go down → need y>z
                newdp[z][0] = suff[z+1];

                // last step was down → must go up → need y<z
                newdp[z][1] = pref[z];
            }

            dp.swap(newdp);
            // clear newdp efficiently
            for (int z = 0; z < m; z++) newdp[z][0] = newdp[z][1] = 0;
        }

        long long ans = 0;
        for (int y = 0; y < m; y++) {
            ans = (ans + dp[y][0] + dp[y][1]) % mod;
        }
        return ans;
    }
};
