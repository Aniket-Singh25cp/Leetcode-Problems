class Solution {
public:
    void backtrack(int i, const vector<int>& nums, vector<int>& curr, vector<vector<int>>& res){
        if(i == nums.size()){
            res.push_back(curr);
            return;
        }
        //take nums[i]
        curr.push_back(nums[i]);
        backtrack(i + 1, nums, curr, res);

        //not-take nums[i]
        curr.pop_back();
        backtrack(i + 1, nums, curr, res);
    }
    vector<vector<int>> subsets(const vector<int> nums){
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(0, nums, curr, res);
        return res;
    }
};