class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length==0){
            return 0;
        }
        int write = 1;
        for(int read = 1; read<nums.length;read++){
            if(nums[read]!=nums[write-1]){
                nums[write] = nums[read];
                write++;
            }
        }
        return write;
    }
}

// class Solution {
//     public int removeDuplicates(int[] nums) {
//         HashSet<Integer> set = new HashSet<>();
//         int write =0;
//         for(int read =0;read<nums.length;read++){
//             if(!set.contains(nums[read])){
//                 set.add(nums[read]);
//                 nums[write]=nums[read];
//                 write++;
//             }
            
//         }
//         return write;
//     }
// }