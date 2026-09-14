class Solution {
    public int firstUniqChar(String s) {
        int hash[] = new int[256];
        for(char c : s.toCharArray()) hash[c]++;
        for(int i = 0; i < s.length(); i++){
            if(hash[s.charAt(i)] == 1) return i;
        }
        return -1;
    }
}