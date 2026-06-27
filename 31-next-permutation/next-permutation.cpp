class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
      
        // Step 1: Find the rightmost position where nums[i] < nums[i+1]
        // This is the "pivot" position where we need to make a change
        int pivotIndex = n - 2;
        while (pivotIndex >= 0) {
            if (nums[pivotIndex] < nums[pivotIndex + 1]) {
                break;
            }
            pivotIndex--;
        }
      
        // Step 2: If a valid pivot exists, find the smallest element to its right
        // that is still larger than the pivot element
        if (pivotIndex >= 0) {
            // Search from right to left for the first element greater than pivot
            for (int swapIndex = n - 1; swapIndex > pivotIndex; swapIndex--) {
                if (nums[swapIndex] > nums[pivotIndex]) {
                    // Swap the pivot with this element
                    swap(nums[pivotIndex], nums[swapIndex]);
                    break;
                }
            }
        }
      
        // Step 3: Reverse all elements after the pivot position
        // This gives us the lexicographically smallest arrangement
        int left = pivotIndex + 1;
        int right = n - 1;
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};
