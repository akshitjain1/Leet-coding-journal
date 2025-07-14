class Solution {
public:
    int jump(vector<int>& nums) {
        int position = nums.size() - 1;
        int jumps = 0;

        while (position > 0) {
            for (int i = 0; i < position; i++) {
                if (i + nums[i] >= position) {
                    position = i;
                    jumps++;
                    break;
                }
            }
        }

        return jumps;
    }
};
