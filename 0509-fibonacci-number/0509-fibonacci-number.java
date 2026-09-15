class Solution {
    // public int fbi(int n){
    //     if(n == 0 || n == 1) return n;
    //     return fbi(n - 1) + fbi(n - 2);
    // }
    public int fib(int n) {
        int arr[] = new int[n + 2];
        arr[0] = 0;
        arr[1] = 1;
        for(int i = 2; i < n + 1; i++){
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        return arr[n];
    }
}