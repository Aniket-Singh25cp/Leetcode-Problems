class Solution {
public:
    int pro(int n){
        int res = 1;
        while(n > 0){
            res *= (n % 10);
            n /= 10;
        }
        return res;
    }
    int smallestNumber(int n, int t) {
        int ans;
        for(int i = n; i <= n + 10; i++){
            if(pro(i) % t == 0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};