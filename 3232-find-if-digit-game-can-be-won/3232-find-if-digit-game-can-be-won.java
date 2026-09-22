class Solution {
    public boolean canAliceWin(int[] nums) {
        int onesSum = 0, doubleSum = 0;
        for(int x : nums){
            if(x < 10) onesSum += x;
            else doubleSum += x;
        }
        return onesSum != doubleSum;
    }
}