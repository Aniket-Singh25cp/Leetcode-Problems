class Solution {
public:
    int maxStable(vector<int>&v,int x){
        int ans = INT_MIN;
        for(int i=0;i<=x;i++){
            ans = max(ans,v[i]);
        }
        return ans;
    }
    int minStable(vector<int>&v,int x){
        int ans = INT_MAX;
        for(int i=x;i<v.size();i++){
            ans = min(ans,v[i]);
        }
        return ans;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            int score = maxStable(nums,i) - minStable(nums,i);
            if(score<=k) return i;
        }
        return -1;
    }
};