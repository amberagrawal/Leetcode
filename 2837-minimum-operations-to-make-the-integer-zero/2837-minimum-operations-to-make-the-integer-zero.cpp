class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        int mini = 1e9;
        for (int i = 1; i <= 60; i++) {
            long long a = 1LL * num1 - 1LL * i * num2;
            if (a <i)  continue;
            int c = 0;
            long long temp = a;
            while (temp > 0) {
                c += (temp & 1);
                temp >>= 1;      
            }
            if (c <= i) {
                mini = min(mini, i);
            }
        }
        if (mini == 1e9) return -1;
        return mini;
    }
};
