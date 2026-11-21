class Solution {
    public int[] findErrorNums(int[] nums) {
        int n = nums.length;
        boolean[] seen = new boolean[n + 1]; 
        int duplicate = -1;
        int missing = -1;
        for(int x : nums){
            if(seen[x]){
                duplicate = x;
            }
            seen[x] = true;
        }
        for(int i = 1; i <= n; i++){
            if(!seen[i]){
                missing = i;
                break;
            }
        }
        return new int[]{duplicate, missing};
    }
}