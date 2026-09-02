class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] output = {-1,-1};
        for(int f=0; f<nums.length-1;f++){
            for(int s = f+1; s<nums.length;s++){
                if(nums[f]+nums[s]==target){
                    output[0]=f;
                    output[1]=s;
                    break;
                }
            }
        }
        return output;
    }
}