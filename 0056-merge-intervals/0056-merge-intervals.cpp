class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for (const auto& interval : intervals) {

            // Overlapping intervals → merge them
            if (!ans.empty() && interval[0] <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
            // Non-overlapping interval → add separately
            else {
                ans.push_back(interval);
            }
        }

        return ans;
    }
};