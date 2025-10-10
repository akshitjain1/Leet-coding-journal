class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string s = "";
        for (int i = 0; i < nums.size() - 1; i++) {
            int maxi = i;
            for (int j = i + 1; j < nums.size(); j++) {
                // Compare by concatenation order
                string a = to_string(nums[j]) + to_string(nums[maxi]);
                string b = to_string(nums[maxi]) + to_string(nums[j]);
                if (a > b) {
                    maxi = j;
                }
            }
            swap(nums[i], nums[maxi]);
        }

        // Concatenate all numbers into one string
        for (auto n : nums) {
            s += to_string(n);
        }

        // Handle the edge case [0, 0, 0] => "0"
        if (s[0] == '0') return "0";

        return s;
    }
};
