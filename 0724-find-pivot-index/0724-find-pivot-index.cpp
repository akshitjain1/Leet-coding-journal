class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int rsum =0;
        int lsum =0;
        int index =-1;
        for(int i =0;i<len;i++){
            rsum +=nums[i];
        }

        for(int i =0;i<len;i++){
            rsum -= nums[i];
            if(lsum == rsum ){
                return i;
            }
            lsum+=nums[i];
        }
       return -1;
    }
};