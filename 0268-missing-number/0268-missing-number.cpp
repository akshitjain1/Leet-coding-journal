#include <vector>
#include <algorithm>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int correctIndex = nums[i];
            if (nums[i] < n && nums[i] != i) {
                std::swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        }

        for (int j = 0; j < n; j++) {
            if (nums[j] != j) {
                return j;
            }
        }
        return n;
    }
};