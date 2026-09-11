class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums.erase(unique(nums.begin(), nums.end()), nums.end());
            }
        }
        return nums.size();
    }

};