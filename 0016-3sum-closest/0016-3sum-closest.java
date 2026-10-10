class Solution {
    public static int abs(int number) {
        return (number < 0) ? -number : number;
    }
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int res=0;
        int min_diff = Integer.MAX_VALUE;
        int n = nums.length;
        for(int i = 0; i<n; i++){
            int left = i+1;
            int right = n-1;
            while(left < right){
                int sum = nums[left]+nums[right]+nums[i];
                int diff = abs(sum-target);
                if(sum == target){
                    res = sum;
                    return res;
                }
                else if (sum > target){
                    if(diff < min_diff){
                        min_diff = diff;
                        res = sum;
                    }
                    right--;
                }else{
                    if(diff < min_diff){
                        min_diff = diff;
                        res = sum;
                    }
                    left++;

                }
            }
        }
        return res;

    }
}