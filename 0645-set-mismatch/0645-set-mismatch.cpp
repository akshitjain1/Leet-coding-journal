class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> miss;
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
            miss.push_back(nums[j]);
            miss.push_back(j+1);
                
            }
        }
        return miss;
    }
};