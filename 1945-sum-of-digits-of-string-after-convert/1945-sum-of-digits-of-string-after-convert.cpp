class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(char c : s){
            int val = c - 'a' + 1;
            sum += (val % 10) + (val / 10);
        }
        while(k-- > 1){
            int new_sum = 0;
            while(sum > 0){
                new_sum += sum % 10;
                sum /= 10; 
            }
            sum = new_sum;
        }
        return sum;
    }
};