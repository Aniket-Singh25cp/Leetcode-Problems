class Solution {
    public boolean canConstruct(String r, String m) {
        int hash[] = new int[256];
        int freq[] = new int[256];
        for(char c : r.toCharArray()) hash[c]++;
        for(char c : m.toCharArray()) freq[c]++;
        for(int i = 0; i < r.length(); i++){
            if(freq[r.charAt(i)] == 0) return false;
            else if(hash[r.charAt(i)] > freq[r.charAt(i)]) return false;
        }
        return true;
    }
}