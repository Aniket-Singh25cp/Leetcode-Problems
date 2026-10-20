class Solution {
public:
    int maxElement(vector<int>& v){
        int maxx = INT_MIN;
        for(int x : v){
            maxx = max(maxx, x);
        }
        return maxx;
    }
    long long timeTaken(vector<int>& v, int n){
        long long time = 0;
        for(int i = 0; i < v.size(); i++){
            time += (v[i] + n - 1LL) / n;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long left = 1, right = maxElement(piles);
        int ans = -1;
        while(left <= right){
            long long mid = left + (right - left) / 2;
            long long total = timeTaken(piles, mid);
            if(total <= h){
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return ans;
    }
};