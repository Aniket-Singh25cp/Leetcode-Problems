class Solution {
public:
    int digSum(int n) {
        int s = 0;
        while (n > 0) { s += n % 10; n /= 10; }
        return s;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size(), swaps = 0;
        // Store: {digit_sum, original_value, original_index}
        vector<tuple<int, int, int>> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = {digSum(nums[i]), nums[i], i};
        }
        
        // Sort based on digit sum, then original value (to match stable sort behavior)
        sort(v.begin(), v.end());

        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++) {
            if (vis[i] || get<2>(v[i]) == i) continue;
            
            int cycle = 0, curr = i;
            while (!vis[curr]) {
                vis[curr] = true;
                curr = get<2>(v[curr]); // O(1) jump using stored index
                cycle++;
            }
            if (cycle > 1) swaps += cycle - 1;
        }
        return swaps;
    }
};