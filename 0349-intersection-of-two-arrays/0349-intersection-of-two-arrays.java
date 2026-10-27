class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        List<Integer> ans = new ArrayList<>();
        Map<Integer, Integer> s1 = new HashMap<>();
        for(int x : nums1){
            s1.put(x, s1.getOrDefault(x, 0) + 1);
        }
        for(int x : nums2){
            if(s1.getOrDefault(x, 0) >= 1){
                ans.add(x);
                s1.put(x, 0);
            }
        }
        return ans.stream().mapToInt(i -> i).toArray();
    }
}