class Solution {
    public boolean checkIfExist(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for(int x : nums){
            if(set.contains(2 * x) || (x % 2 == 0 && set.contains(x / 2))){
                return true;
            }
            set.add(x);
        }
        return false;
    }
}