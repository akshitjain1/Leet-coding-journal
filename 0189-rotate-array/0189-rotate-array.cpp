class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int index =0;
        int n = nums.size();
        k %= n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};