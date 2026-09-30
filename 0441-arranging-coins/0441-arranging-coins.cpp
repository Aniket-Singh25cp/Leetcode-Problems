class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0, temp = n;
        if(n == 1) return 1;
        for(int i = 1; i < n; i++){ 
            if(temp <= 0) return count;
            if(temp - i >= 0){
                count++;
            }
            temp -= i;
        }
        return count;
    }
};