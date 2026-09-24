class Solution {
    public int mostWordsFound(String[] s) {
        int max = 0;
        for(int i = 0; i < s.length; i++){
            int c = 0;
            for(int j = 0; j < s[i].length(); j++){
                if(s[i].charAt(j) == ' ') c++;
            }
            max = Math.max(max,c+1);
        }
        return max;
    }
}