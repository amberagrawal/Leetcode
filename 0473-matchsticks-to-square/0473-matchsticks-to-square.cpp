class Solution {
public:

    unordered_map<int,bool> dp;

    bool f(vector<int>& arr,
           int mask,
           int sides,
           int curr,
           int target) {

        // 3 sides done => 4th automatically done
        if(sides == 3)
            return true;

        // memo
        if(dp.count(mask))
            return dp[mask];

        for(int i = 0; i < arr.size(); i++) {

            // already used
            if(mask & (1 << i))
                continue;

            // exceed target
            if(curr + arr[i] > target)
                continue;

            int newMask = mask | (1 << i);

            // side completed
            if(curr + arr[i] == target) {

                if(f(arr, newMask,
                     sides + 1,
                     0,
                     target))
                    return dp[mask] = true;
            }

            // continue current side
            else {

                if(f(arr, newMask,
                     sides,
                     curr + arr[i],
                     target))
                    return dp[mask] = true;
            }
        }

        return dp[mask] = false;
    }

    bool makesquare(vector<int>& arr) {

        int sum = accumulate(arr.begin(),
                             arr.end(), 0);

        if(sum % 4 != 0)
            return false;

        int target = sum / 4;

        sort(arr.rbegin(), arr.rend());

        return f(arr, 0, 0, 0, target);
    }
};