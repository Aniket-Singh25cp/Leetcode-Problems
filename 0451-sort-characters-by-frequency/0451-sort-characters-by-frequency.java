class Solution {
    public String frequencySort(String s) {
        int n = s.length();
        int[] freq = new int[123];
        for(int i = 0; i < n; i++){
            freq[s.charAt(i)]++;;
        }

        List<int[]> vec = new ArrayList<>();
        for (int i = 0; i < 123; i++) {
            if (freq[i] > 0) {
                vec.add(new int[]{freq[i], i});
            }
        }
        Collections.sort(vec, (a, b) -> b[0] - a[0]);
        StringBuilder ans = new StringBuilder();
        for (int[] pair : vec) {
            for (int i = 0; i < pair[0]; i++) {
                ans.append((char) pair[1]); 
            }
        }
        return ans.toString();
    }
}