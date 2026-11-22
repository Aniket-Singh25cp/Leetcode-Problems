class Solution {
    public boolean checkString(String s) {
        boolean a_seen = false;
        boolean b_seen = false;
        for(char c : s.toCharArray()){
            if(b_seen && c == 'a'){
                a_seen = true;
            }
            if(c == 'b'){
                b_seen = true;
            }
        }
        return a_seen == false;
    }
}