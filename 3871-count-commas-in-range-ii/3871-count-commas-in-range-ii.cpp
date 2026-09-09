class Solution {
public:
    long long countCommas(long long n) {
        long long total = 0;
        long long limit = 1000;
        while(n >= limit){
            total += (n - limit + 1);
            if(limit > LLONG_MAX / 1000) break;
            limit *= 1000;
        }
        return total;
    }
};