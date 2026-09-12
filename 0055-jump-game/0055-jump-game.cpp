class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int goal = n - 1;
        int max_jump = 0;
        for(int i = n-1;i>=0;i--){
            max_jump = nums[i];
            if(i + max_jump >= goal){
                goal = i;
            }
        }
        return goal == 0 ? true : false;
    }
};