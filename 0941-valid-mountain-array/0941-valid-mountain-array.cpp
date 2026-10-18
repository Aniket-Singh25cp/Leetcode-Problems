class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int left = 0, right = arr.size() - 1;
        while(left + 1 < arr.size() - 1 && arr[left] < arr[left + 1]){
            left++;
        }
        while(right - 1 > 0 && arr[right - 1] > arr[right]){
            right--;
        }

        return left == right;
    }
};