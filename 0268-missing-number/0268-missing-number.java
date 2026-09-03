class Solution {
    public int missingNumber(int[] nums) {
        HashSet<Integer> list = new HashSet<>();
        int n = nums.length;
        for(int i =0;i<n;i++){
            list.add(nums[i]);
        }
        for(int i = 1; i<=n;i++){
            if(!(list.contains(i))){
                return i;
            }
        }
        return 0;
    }
}