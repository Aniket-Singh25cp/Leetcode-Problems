class Solution {
    public int maxSubArray(int[] nums) {
        int best = nums[0], sum = nums[0];
        for(int k = 1; k < nums.length; k++){
            sum = Math.max(nums[k], sum + nums[k]);
            best = Math.max(best,sum);
        }
        return best;
    }
}