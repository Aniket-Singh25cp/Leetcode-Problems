class Solution {
    public String convertToTitle(int n) {
        StringBuilder ans = new StringBuilder();
        while(n > 0){
            n--;
            int curr = n % 26;
            ans.append((char) (curr + 'A'));
            n /= 26;
        }
        return ans.reverse().toString();
    }
}