class Solution {
    public boolean canAliceWin(int[] nums) {
        int onesSum = 0, doubleSum = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] < 10) onesSum += nums[i];
            else doubleSum += nums[i];
        }
        if(onesSum == doubleSum) return false;
        return true;
    }
}