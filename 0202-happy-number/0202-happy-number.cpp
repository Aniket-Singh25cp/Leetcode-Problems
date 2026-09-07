class Solution {
public:
    int squareNum(int n){
        int ans = 0;
        while(n!=0){
            ans += (n%10) * (n%10);
            n /= 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int a = n;
        int b = squareNum(n);
        while (b!=1 && a!=b){
            a = squareNum(a);
            b = squareNum(squareNum(b)); //Floyd's Cycle FInding Algorithm
            // if a nummber is stuck in loop; a moves 1 step and b moves 2 step
            // if they are in a loop then b will crash into a 
            //Also called the Hare-Tortoise Algorithm
        }
        return b==1;
    }
};