class Solution {
public:
    int digit(int n){
        int s = 0;
        while(n > 0){
            s += n % 10;
            n /= 10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) {
        int eSum = 0, dSum = 0;
        for(int x : nums) eSum += x;
        for(int i = 0; i < nums.size(); i++){
            dSum += digit(nums[i]);
        }
        return abs(eSum - dSum);
    }
};