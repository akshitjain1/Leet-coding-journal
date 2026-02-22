class Solution {
public:
    int binaryGap(int n) {
    int max_dist = 0;
    int last_pos = -1;
    int current_pos = 0;

    while (n > 0) {
        // Check if the current least significant bit is 1
        if (n & 1) {
            if (last_pos != -1) {
                max_dist = std::max(max_dist, current_pos - last_pos);
            }
            last_pos = current_pos;
        }
        // Shift n to the right and increment position counter
        n >>= 1;
        current_pos++;
    }

    return max_dist;
    }
};