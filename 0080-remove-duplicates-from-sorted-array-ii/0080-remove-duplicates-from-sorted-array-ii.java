class Solution {
    public int removeDuplicates(int[] nums) {
        int cm = 1;
        int body = 0;
        int count =1;
        while(cm < nums.length){
            if(count == 2 && nums[cm]==nums[body]){
                cm++;
                continue;
            }
            if(nums[cm]==nums[body]){
                count++;
                body++;
                nums[body]=nums[cm];
                cm++;
            }else{
                count=1;
                body++;
                nums[body]=nums[cm];
                cm++;
            }
        }
        return body+1;
    }
}