class Solution {
public:
    
    unordered_map<int,bool> dp;

    bool solve(int mask, int total, int maxi) {

        // already calculated
        if(dp.count(mask))
            return dp[mask];

        // try every number
        for(int i = 1; i <= maxi; i++) {

            // if already used
            if(mask & (1 << (i - 1)))
                continue;

            // if current player can win immediately
            if(i >= total)
                return dp[mask] = true;

            // give turn to opponent
            int newMask = mask | (1 << (i - 1));

            // if opponent loses, current player wins
            if(!solve(newMask, total - i, maxi))
                return dp[mask] = true;
        }

        // no winning move found
        return dp[mask] = false;
    }

    bool canIWin(int maxi, int desiredTotal) {

        // if target already reached
        if(desiredTotal <= 0)
            return true;

        // total possible sum
        int sum = maxi * (maxi + 1) / 2;

        // impossible to reach target
        if(sum < desiredTotal)
            return false;

        return solve(0, desiredTotal, maxi);
    }
};