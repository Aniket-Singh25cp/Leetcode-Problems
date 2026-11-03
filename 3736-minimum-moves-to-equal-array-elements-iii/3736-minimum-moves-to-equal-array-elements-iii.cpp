class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi = nums[nums.size() - 1], moves = 0;
        for(int x : nums){
            moves += abs(maxi - x);
        }
        return moves;
    }
};