class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        int minDist = abs(nums[0]);

        for(auto x : nums){
            int a = abs(x);

            if(a < minDist || (a == minDist && x > ans)){
                ans = x;
                minDist = a;
            } 
        }
        return ans;
    }
};