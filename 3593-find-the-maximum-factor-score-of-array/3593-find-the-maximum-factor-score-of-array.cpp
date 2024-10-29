#include <iostream>
#include <vector>
#include <numeric> // for std::lcm and std::gcd
using namespace std;

class Solution {
public:
    long long maxScore(vector<int>& nums) {
        long long globalLCM = 1, globalGCD = nums[0];
        long long maxScore = 0;

        if (nums.empty()) return 0;

        // Calculate overall LCM and GCD of the array
        for (int num : nums) {
            globalLCM = std::lcm(globalLCM, num);
            globalGCD = std::gcd(globalGCD, num);
        }

        maxScore = max(maxScore, static_cast<long long>(globalLCM) * globalGCD);

        // Loop to consider each element as removed one at a time
        for (int i = 0; i < nums.size(); ++i) {
            long long tempLCM = 1, tempGCD = 0;

            for (int j = 0; j < nums.size(); ++j) {
                if (i != j) {
                    tempLCM = std::lcm(tempLCM, nums[j]);
                    tempGCD = (tempGCD == 0) ? nums[j] : std::gcd(tempGCD, nums[j]);
                }
            }

            maxScore = max(maxScore, static_cast<long long>(tempLCM) * tempGCD);
        }

        return maxScore;
    }
};
