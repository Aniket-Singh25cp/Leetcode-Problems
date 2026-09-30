class Solution {
public:
    int arrangeCoins(int n) {
        return floor((sqrt(1 + (1LL * 8 * n)) - 1) / 2);
        // As sum of first n numbers is n * (n + 1) / 2
        // and that should be <= n
        //so solve for n^2 + n - 2n <= 0 equation and take floor value of positive root
    }
};