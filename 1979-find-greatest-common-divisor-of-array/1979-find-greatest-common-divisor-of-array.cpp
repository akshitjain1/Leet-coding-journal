class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i] > maxi){
                maxi = max(maxi, nums[i]);
            }
            if(nums[i] < mini){
                mini = min(mini, nums[i]);
            }
        }
        if(maxi % mini ==0){
            return mini;
        }
        int gcd = 1;
        for(int i = 1 ; i<min(mini, maxi);i++){
            if(mini % i ==0 && maxi % i ==0){
                gcd = i;
            }
        }
        return gcd;
    }
};