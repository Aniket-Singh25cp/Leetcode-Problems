class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int hash[2];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                if(hash[1] != 0){
                    if(i - hash[1] < k){
                        return false;
                    }else{
                        hash[1] = i + 1;
                    }
                }else{
                    hash[1] = i + 1;
                }
            }
        }
        return true;
    }
};