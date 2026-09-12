class Solution {
    public int missingNumber(int[] nums) {
        Set<Integer> list = new HashSet<>();
        for(int n : nums){
            list.add(n);
        }
        for(int i =1;i<=nums.length;i++){
            if(!list.contains(i)){
                return i;
            }
        }
        return 0;
    }
}