class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDist = 0, n = colors.size();
        int l = colors[0], r = colors[n - 1];
        for(int i = n - 1; i >= 0; i--){
            int curr = 0;
            if(colors[i] != l){
                curr += abs(i - 0);
            }
        maxDist = max(maxDist, curr);
        }
        for(int i = 0; i < n; i++){
            int curr = 0;
            if(colors[i] != r){
                curr += abs(n - i - 1);
            }
        maxDist = max(maxDist, curr);
        }
        return maxDist;
    }
};