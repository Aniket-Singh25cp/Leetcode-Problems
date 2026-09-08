class Solution {
public:
    int countCommas(int n) {
        int ans = 0;
        if(n < 1000) return 0;
        if(n == 100000) return 99001;
        if(n >= 1000 && n<=99999){
            ans += (n - 1000 + 1);
        }
        return ans;
    }
};