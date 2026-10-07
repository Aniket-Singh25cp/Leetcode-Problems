import java.util.ArrayList;
import java.util.List;

class Solution {
    public int[] resultArray(int[] nums) {
        // Handle base case
        if (nums.length < 3) {
            return nums;
        }

        // Initialize the two dynamic lists
        List<Integer> arr1 = new ArrayList<>();
        List<Integer> arr2 = new ArrayList<>();

        arr1.add(nums[0]);
        arr2.add(nums[1]);

        // Distribute elements based on the last added elements
        int i = 2;
        while (i < nums.length) {
            if (arr1.get(arr1.size() - 1) > arr2.get(arr2.size() - 1)) {
                arr1.add(nums[i]);
            } else {
                arr2.add(nums[i]);
            }
            i++;
        }

        // Concatenate arr2 into arr1
        arr1.addAll(arr2);

        // Convert List<Integer> back to primitive int[] array
        int[] result = new int[nums.length];
        for (int j = 0; j < nums.length; j++) {
            result[j] = arr1.get(j);
        }

        return result;
    }
}
