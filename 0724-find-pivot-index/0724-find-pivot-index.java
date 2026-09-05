class Solution {
    public int pivotIndex(int[] nums) {
        int total =0;
        for(int i =0;i<nums.length;i++){
            total += nums[i];
        }
        // System.out.println(total);
        int leftsum =0;
        for(int i =0;i<nums.length;i++){
            int rightsum = total-leftsum-nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
}