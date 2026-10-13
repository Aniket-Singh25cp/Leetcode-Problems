class Solution {
    public int sod(int n){
        int sum = 0;
        while(n > 0){
            int dig = n % 10;
            sum += (dig * dig);
            n /= 10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
        int fast = n, slow = n;
        while(fast != 1){
            slow = sod(slow);
            fast = sod(sod(fast));
            if(slow == fast && slow != 1){
                return false;
            }
        }
        return true;
    }
}