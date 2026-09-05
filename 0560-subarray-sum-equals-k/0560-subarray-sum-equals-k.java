class Solution {
    public int subarraySum(int[] nums, int k) {
        Map<Integer, Integer> freq = new HashMap<>();
        int count =0;
        int current_sum = 0;
        freq.put(0,1);
        for(int num : nums){
            current_sum += num;
            int needed = current_sum-k;
            count += freq.getOrDefault(needed, 0);
            freq.put(current_sum, freq.getOrDefault(current_sum, 0)+1);

        }
        return count;
    }
}