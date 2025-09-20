#include <cmath>

class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long total = 0;
        for (auto &q : queries) {
            long long l = q[0], r = q[1];
            long long steps = 0;

            long long start = l;
            while (start <= r) {
                // find next power of 4 greater than or equal to start
                long long k = 1;
                while (k * 4 <= start) k *= 4;

                long long end = min(r, k * 4 - 1);
                long long cnt = end - start + 1;

                long long factor = 0;
                long long temp = start;
                while (temp > 0) { temp /= 4; factor++; }

                steps += cnt * factor;

                start = end + 1;
            }

            total += (steps + 1) / 2;
        }
        return total;
    }
};
