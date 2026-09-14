class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int maxx = 0;
        for(int x : candies){
            maxx = Math.max(x,maxx);
        }
        List<Boolean> res = new ArrayList<>();
        for(int x : candies){
            if(x + extraCandies >= maxx){
                res.add(true);
            }else{
                res.add(false);
            }
        }
        return res;
    }
}