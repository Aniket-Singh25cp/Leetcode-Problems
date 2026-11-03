class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size(), max = INT_MIN, minMoves = 0;
        for(int x : nums){
            if(x > max) max = x;
        }
        for(int x : nums){
            minMoves += (max - x);
        }
        return minMoves;
    }
};