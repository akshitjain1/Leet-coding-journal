class Solution {
    public int removeDuplicates(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        int write =0;
        for(int read =0;read<nums.length;read++){
            if(!set.contains(nums[read])){
                set.add(nums[read]);
                nums[write]=nums[read];
                write++;
            }
            continue;
        }
        return write;
    }
}