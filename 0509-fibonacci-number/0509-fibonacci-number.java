class Solution {
    public int fbi(int n){
        if(n == 0 || n == 1) return n;
        return fbi(n - 1) + fbi(n - 2);
    }
    public int fib(int n) {
        return fbi(n);
    }
}