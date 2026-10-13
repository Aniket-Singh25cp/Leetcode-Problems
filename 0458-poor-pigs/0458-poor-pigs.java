class Solution {
    public int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int rounds = minutesToTest / minutesToDie;

        int states = rounds + 1;

        return (int) Math.ceil(Math.log(buckets) / Math.log(states) - 1e-9);
    }
}