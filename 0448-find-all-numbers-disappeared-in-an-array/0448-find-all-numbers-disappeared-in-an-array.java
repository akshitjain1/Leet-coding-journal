class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n = nums.length;
        Map<Integer, Boolean> map = new HashMap<>();
        ArrayList<Integer> result = new ArrayList<>();
        for(int num : nums){
            map.put(num, true);
        }
        for(int i =1;i<=n;i++){
            if(map.getOrDefault(i,false)){
                continue;
            }
            result.add(i);
        }
        return result;
    }
}