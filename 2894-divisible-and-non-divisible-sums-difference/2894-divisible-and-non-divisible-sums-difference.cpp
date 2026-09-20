class Solution {
public:
    int differenceOfSums(int n, int m) {
        int divisible = 0, not_divisible = 0;
        for(int i = 1; i <= n; i++){
            divisible += (i % m == 0) ? i : 0;
            not_divisible += (i % m != 0) ? i : 0;
        }
        return not_divisible - divisible;
    }
};