class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        for(int x : nums){
            freq.put(x, freq.getOrDefault(x, 0) + 1);
            if(freq.get(x) == 2){
                return true;
            }
        }
        return false;
    }
}