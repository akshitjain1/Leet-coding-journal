class Solution {
    public int minSubArrayLen(int target, int[] arr) {
        int sum = 0;
        int low = 0;
        int high = 0;
        int result = Integer.MAX_VALUE;
        while(high < arr.length){
            sum += arr[high];
            while(sum >= target){
                result = (high-low+1 > result)?result:high-low+1;
                sum -= arr[low];
                low++;
            }
            high++;
        }
        return (result==Integer.MAX_VALUE)?0:result;
    }
}