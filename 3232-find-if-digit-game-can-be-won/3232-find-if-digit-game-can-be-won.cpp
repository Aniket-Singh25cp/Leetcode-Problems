class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int onesSum = 0, doubleSum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 10) onesSum += nums[i];
            else doubleSum += nums[i];
        }
        if(onesSum == doubleSum) return false;
        return true; 
    }
};