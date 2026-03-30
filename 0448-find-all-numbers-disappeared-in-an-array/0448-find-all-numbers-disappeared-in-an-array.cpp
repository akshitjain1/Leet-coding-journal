class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;

        // Step 1: Iterate through the array and mark visited numbers
        for (int i = 0; i < nums.size(); i++) {
            // Get the value (as an index). Use abs() because it might already be negative.
            int index = abs(nums[i]) - 1; 
            
            // Mark the value at 'index' as negative to show we've "seen" the number (index + 1)
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        // Step 2: Iterate again to find which indices are still positive
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                // If nums[i] is positive, it means (i + 1) never appeared in the array
                result.push_back(i + 1);
            }
        }

        return result;
    }
};