class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            if(nums[i]<0){
                i++;
                continue;
            }
            int correctIndex = nums[i]-1;
            if (nums[i]>0 && nums[i] <= n && nums[i] != nums[correctIndex]) {
                std::swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        }

        for (int j = 0; j < n; j++) {
            if (nums[j] != j+1) {
                return j+1;
            }
        }
        return n+1;
    }
};