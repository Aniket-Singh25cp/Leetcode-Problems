class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        
        // right[i] stores min(nums[i ... n-1])
        vector<int> right(n);
        right[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            right[i] = min(right[i + 1], nums[i]);
        }
        
        int left = INT_MIN;
        for (int i = 0; i < n; ++i) {
            left = max(left, nums[i]);
            
            // Cast to long long to prevent integer overflow during subtraction
            long long score = (long long)left - right[i];
            if (score <= k) {
                return i;
            }
        }
        
        return -1;
    }
};