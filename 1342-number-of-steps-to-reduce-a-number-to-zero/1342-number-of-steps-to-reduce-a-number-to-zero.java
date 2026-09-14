class Solution {
    public int numberOfSteps(int n) {
        return n > 0 ? Integer.bitCount(n) + 31 - Integer.numberOfLeadingZeros(n) : 0;
    }
}