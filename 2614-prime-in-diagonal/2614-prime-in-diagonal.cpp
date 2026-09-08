class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxPrime = 0;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i][i])) maxPrime = max(maxPrime, nums[i][i]);
            if(isPrime(nums[i][nums.size() - i - 1])) maxPrime = max(maxPrime, nums[i][nums.size() - i - 1]);
        }
        return maxPrime;
    }
};