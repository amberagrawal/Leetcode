class Solution {
public:
    const int MOD = 1e9 + 7;

    long long power(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = res * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return res;
    }

    long long nCr(int n, int r) {
        if (r > n || r < 0) return 0;
        r = min(r, n - r); // optimization

        long long num = 1, den = 1;

        for (int i = 0; i < r; i++) {
            num = num * (n - i) % MOD;
            den = den * (i + 1) % MOD;
        }

        return num * power(den, MOD - 2) % MOD;
    }

    int countVisiblePeople(int n, int pos, int k) {
        long long ans = (2LL * nCr(n - 1, k)) % MOD;
        return ans;
    }
};