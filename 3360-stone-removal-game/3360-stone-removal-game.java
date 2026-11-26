class Solution {
    public boolean canAliceWin(int n) {
        int i = 10;
        boolean aliceWin = false;
        while(n >= i){
            n -= i;
            i--;
            aliceWin = !aliceWin;
        }
        return aliceWin;
    }
}