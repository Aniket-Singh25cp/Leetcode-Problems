class Solution {
    public int maxFreqSum(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        for(char c : s.toCharArray()){
            map.put(c, map.getOrDefault(c, 0) + 1);
        }
        char maxVow = '\0', maxCon = '\0';
        int vMax = 0, cMax = 0;
        for(Map.Entry<Character, Integer> e : map.entrySet()){
            char c = e.getKey();
            int x = e.getValue();
            if("aeiou".indexOf(c) != -1){
                if(x > vMax){
                    maxVow = c;
                    vMax = x;
                }
            }else {
                if(x > cMax){
                    maxCon = c;
                    cMax = x;
                }
            }
        }
        return vMax + cMax;
    }
}