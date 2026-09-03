class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = nums1;
        res.insert(res.end(), nums2.begin(), nums2.end());
        int  n = res.size();
        sort(res.begin(), res.end());
        float med = 0;
        if(n%2!=0){
            med += res[n/2];
        }
        else{
            med += (res[n/2] + res[(n/2)-1]) / 2.0;
        }
        return med;
    }
};