class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n/2, true);
        isPrime[0] = false;

        for (long long i = 3; i * i < n; i+=2) {
            if (isPrime[i/2]) {
                for (long long j = i * i; j < n; j += 2*i) {
                    isPrime[j/2] = false;
                }
            }
        }

        int count = 1;
        for (int i = 1; i < n/2; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};