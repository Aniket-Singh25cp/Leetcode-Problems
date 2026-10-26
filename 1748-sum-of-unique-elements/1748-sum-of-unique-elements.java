class Solution {
    public int sumOfUnique(int[] nums) {
        int sum = 0;
        Map<Integer, Integer> m = new HashMap<>();
        for(int x : nums){
            m.put(x, m.getOrDefault(x, 0) + 1);
        }
        for (Map.Entry<Integer, Integer> entry : m.entrySet()) {
            if (entry.getValue() == 1) {
                sum += entry.getKey(); // Adds the key to the sum
            }
        }

        return sum;
    }
}