class Solution {
public:
    int gcdd(int a, int b){
        return b==0 ? a : gcdd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int a = *min_element(nums.begin(),nums.end());
        int b = *max_element(nums.begin(),nums.end());

        return gcdd(a,b);
    }
};