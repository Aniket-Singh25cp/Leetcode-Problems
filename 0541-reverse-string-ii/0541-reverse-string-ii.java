class Solution {
    public String reverseStr(String s, int k) {
        char[] c = s.toCharArray();
        for(int x = 0; x < c.length; x += 2*k){
            int i = x;
            int j = Math.min(i + k - 1, c.length - 1);
            while(i < j){
                char t = c[i];
                c[i] = c[j];
                c[j] = t;
                i++;
                j--;
            }
        }
        return new String(c);
    }
}