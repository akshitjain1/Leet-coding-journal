class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector <int> mar;
        // int count=0;
        // for(int i =0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         mar.push_back(nums[i]);
        //     }else{
        //         count++;
        //     }
        // }
        // for(int i =0;i<count;i++){
        //     mar.push_back(0);
        // }
        // nums = mar;

        
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
            count++;
            }
            else
            {
            int temp = nums[i];
            nums[i] = nums[i-count];
            nums[i-count] = temp;
            }
        }
    }
};