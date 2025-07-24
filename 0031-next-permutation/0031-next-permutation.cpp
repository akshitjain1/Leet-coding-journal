class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Step 1: Find the pivot
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {
            // Step 2: Find the successor
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            // Step 3 (Part 1): Swap
            swap(nums[i], nums[j]);
        }

        // Step 3 (Part 2): Reverse the suffix
        reverse(nums.begin() + i + 1, nums.end());
    }
};