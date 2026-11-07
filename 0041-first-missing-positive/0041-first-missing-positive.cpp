class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        int i = 1;
        while(true){
            if(m[i] == 0) return i;
            i++;
        }
        return -1;
    }
};