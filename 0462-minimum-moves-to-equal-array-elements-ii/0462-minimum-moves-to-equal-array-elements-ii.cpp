class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long med = nums[nums.size() / 2], ans = 0;
        for(long long x : nums){
            ans += abs(med - x);
        }
        return ans;
    }
};