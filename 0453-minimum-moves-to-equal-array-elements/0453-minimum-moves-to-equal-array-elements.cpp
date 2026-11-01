class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mini = nums[0], ops = 0;
        for(int x : nums){
            ops += abs(mini - x);
        }
        return ops;
    }
};