class Solution {
    public int removeDuplicates(int[] nums) {
        int read = 1;
        int write = 0;
        while(read < nums.length){
            if(nums[read]==nums[write]){
                read++;
                continue;
            }else{
                write++;
                nums[write]=nums[read];
            }
        }
        return write+1;
    }
}