class Solution {
    public int singleNumber(int[] nums) {
        int res = 0;
        for(Integer x : nums) res ^= x;
        return res;
    }
}