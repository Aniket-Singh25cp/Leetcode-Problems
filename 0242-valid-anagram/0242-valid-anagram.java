class Solution {
    public boolean isAnagram(String s, String t) {
        int hash[] = new int[256];
        int freq[] = new int[256];
        for(char c : s.toCharArray()) hash[c]++;
        for(char c : t.toCharArray()) freq[c]++;

        for(int i = 0; i < 256; i++){
            if(hash[i] != freq[i]) return false;
        }
        return true;
    }
}