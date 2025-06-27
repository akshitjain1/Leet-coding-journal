class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int miss;
        int n = nums.size();
        int i =0;
        while (i < n) {
            int correctIndex = nums[i]-1;
            if (nums[i] != nums[correctIndex]) {
                std::swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        }

        for (int j = 0; j < n; j++) {
            if (nums[j] != j+1) {
           miss = nums[j];
                
            }
        }
        return miss;
    }
};