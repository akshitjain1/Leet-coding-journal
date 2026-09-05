class Solution {
    public int singleNumber(int[] nums) {
        int xor=0;
        for(int n : nums){
            xor ^= n;
        }
        return xor;
    }
}
// // Using Hash But it takes space O(n);
// class Solution {
//     public int singleNumber(int[] nums) {
//         HashMap<Integer, Integer> freq = new HashMap<>();
//         for(int num : nums){
//             freq.put(num, freq.getOrDefault(num,0)+1);
//         }
//         for(int num : nums){
//             if(freq.getOrDefault(num,0) == 1){
//                 return num;
//             }
//         }
//         return -1;

//     }
// }