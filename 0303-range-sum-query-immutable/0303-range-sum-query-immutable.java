class NumArray {
    private int[] running_sum ; 
    public NumArray(int[] nums) {
        running_sum = new int[nums.length];
        running_sum[0]=nums[0];
        for(int i =1;i<nums.length;i++){
            running_sum[i] = running_sum[i-1]+nums[i];
        }
    }
    
    public int sumRange(int left, int right) {
        if(left == 0) return running_sum[right];
        if(left==right) return running_sum[right]-running_sum[right-1];
        return running_sum[right] - running_sum[left-1];

    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */