class Solution {
public:
    int arrangeCoins(int n) {
        return floor((sqrt(1 + (1LL * 8 * n)) - 1) / 2);
    }
};