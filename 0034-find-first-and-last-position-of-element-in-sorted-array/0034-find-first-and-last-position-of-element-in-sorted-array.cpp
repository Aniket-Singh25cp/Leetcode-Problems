class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid = s + (e-s)/2;
        vector<int> ans = {-1,-1};
        //left-most occurence
        while(s<=e){
            if(target == nums[mid]){
                ans[0] = mid;
                e = mid - 1;
            }
            if(nums[mid] > target){
                e = mid - 1;
            }
            if(nums[mid] < target){
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        s = 0, e = nums.size() - 1, mid = s + (e-s)/2;
        //last occurence
        while(s<=e){
            if(target == nums[mid]){
                ans[1] = mid;
                s = mid + 1;
            }
            if(nums[mid] > target){
                e = mid - 1;
            }
            if(nums[mid] < target){
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};