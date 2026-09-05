class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> result = new ArrayList<>();

        for (int number : nums) {
            int value = Math.abs(number);
            int index = value - 1;
            nums[index] = -Math.abs(nums[index]); // Position becomes the presence marker.
        }

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > 0) {
                result.add(i + 1);
            }
        }

        return result;
    }
}

// // Can be a Solution but Here the Space complexity is O(n);
// class Solution {
//     public List<Integer> findDisappearedNumbers(int[] nums) {
//         int n = nums.length;
//         Map<Integer, Boolean> map = new HashMap<>();
//         ArrayList<Integer> result = new ArrayList<>();
//         for(int num : nums){
//             map.put(num, true);
//         }
//         for(int i =1;i<=n;i++){
//             if(map.getOrDefault(i,false)){
//                 continue;
//             }
//             result.add(i);
//         }
//         return result;
//     }
// }