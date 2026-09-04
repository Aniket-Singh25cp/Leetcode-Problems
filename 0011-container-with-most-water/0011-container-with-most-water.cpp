class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int curr = 0, maxH = 0;
        while(i<j){
            curr = (j-i) * min(height[j],height[i]);
            maxH = max(curr, maxH);
            if(height[i]>=height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxH;
    }
};