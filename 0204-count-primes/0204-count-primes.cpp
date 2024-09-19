class Solution {
public:
    int check(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    int count=0;
    for(int i=2;i<n;i++){
        if(isPrime[i]==true){
            count++;
        }
    }
    return count;
    }
    int countPrimes(int n) {
        int a=check(n);
        return a;
    }
};