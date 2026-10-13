class Solution {
    public long maxAlternatingSum(int[] nums) {
        long squared[] = new long[nums.length];
        for(int i = 0; i < nums.length; i++){
            squared[i] = (long) nums[i] * nums[i];
        }
        Arrays.sort(squared);
        int lim = nums.length / 2;
        long pos = 0, neg = 0;
        for(int i = 0; i < lim; i++){
            neg += squared[i];
        }
        for(int i = lim; i < nums.length; i++){
            pos += squared[i];
        }
        return (pos - neg);
    }
}