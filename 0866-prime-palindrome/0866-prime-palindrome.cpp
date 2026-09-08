class Solution {
public:
    bool palindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = (reversedHalf * 10) + (x % 10);
            x /= 10;
        }
        return x == reversedHalf || x == reversedHalf / 10;
    }

    bool isPrime(int num) {
        if (num < 2) return false;
        if (num == 2) return true;
        if (num % 2 == 0) return false;
        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    }

    int primePalindrome(int n) {
        if (8 <= n && n <= 11) return 11;
        
        while (true) {
            if (palindrome(n) && isPrime(n)) {
                return n;
            }
            n++;
            if (1000 < n && n < 10000) {
                n = 10001;
            } else if (100000 < n && n < 1000000) {
                n = 1000001;
            } else if (10000000 < n && n < 100000000) {
                n = 100000001;
            }
        }
    }
};
