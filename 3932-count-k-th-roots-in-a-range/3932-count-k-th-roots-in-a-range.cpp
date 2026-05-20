class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        long long low = ceil(pow((double)l, 1.0 / k) - 1e-10);
        long long high = floor(pow((double)r, 1.0 / k) + 1e-10);

        return max(0LL, high - low + 1);
    }
};