class Solution {
    public int[] separateDigits(int[] nums) {
        List<Integer> l = new ArrayList<>();
        for(int x : nums){
            String s = Integer.toString(x);
            for(int i = 0; i < s.length(); i++){
                l.add(s.charAt(i) - '0');
            }
        }
        return l.stream().mapToInt(i -> i).toArray();
    }
}