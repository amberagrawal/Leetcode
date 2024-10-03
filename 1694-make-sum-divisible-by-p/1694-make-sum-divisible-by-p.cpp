class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for (long long num : nums) {
            total = (total + num) % p;
        }

        if (total == 0) {
            return 0; // Already divisible by p
        }

        long long rem = total; // We need to remove a subarray that gives this remainder

        map<long long, long long> mp;
        mp[0] = -1; // To handle the case where the subarray starts from index 0
        long long prefixSum = 0;
        long long minLen = nums.size(); // Initialize with the worst case (removal of entire array)

        for (long long i = 0; i < nums.size(); i++) {
            prefixSum = (prefixSum + nums[i]) % p;
            long long needed = (prefixSum - rem + p) % p;

            if (mp.find(needed) != mp.end()) {
                minLen = min(minLen, i - mp[needed]);
            }

            // Update the map with current prefix sum and index
            mp[prefixSum] = i;
        }

        return (minLen == nums.size()) ? -1 : minLen;
    }
};
