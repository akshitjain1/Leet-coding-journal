class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         // Step 1: Create a frequency array for numbers 0-100
        vector<int> count(101, 0);
        for (int num : nums) {
            count[num]++;
        }

        // Step 2: Transform 'count' into a prefix sum array
        // count[i] will store how many numbers are <= i
        for (int i = 1; i <= 100; i++) {
            count[i] += count[i - 1];
        }

        // Step 3: Build the result array
        vector<int> result;
        for (int num : nums) {
            if (num == 0) {
                result.push_back(0); // No number is smaller than 0
            } else {
                // The number of elements smaller than 'num' 
                // is stored in count[num - 1]
                result.push_back(count[num - 1]);
            }
        }

        return result;
    }
};