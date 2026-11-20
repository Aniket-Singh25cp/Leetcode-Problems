class Solution {
    public int heightChecker(int[] nums) {
        int []expected = Arrays.copyOf(nums, nums.length);
        Arrays.sort(expected);
        int count = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] != expected[i]) count++;
        }
        return count;
    }
}