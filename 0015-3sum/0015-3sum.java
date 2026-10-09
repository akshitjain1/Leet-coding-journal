
class Solution {
    public List<List<Integer>> threeSum(int[] a) {
        List<List<Integer>> res = new ArrayList<>();
        Arrays.sort(a);
        
        // Loop bound changed to a.length for safety, though a.length-2 is fine
        for(int i = 0; i < a.length; i++){
            if(a[i] > 0) break;

           // Check previous element to avoid skipping valid duplicates
            if(i > 0 && a[i] == a[i-1]) continue; 

            int left = i + 1;
            int right = a.length - 1;
            int target = -1 * a[i];
            
            while(left < right){
                int s = a[left] + a[right];
                if(s == target){
                    res.add(Arrays.asList(a[i], a[left], a[right]));
                    
                    // Correctly skip duplicates before moving pointers out of the duplicate zone
                    while(left < right && a[left] == a[left+1]) { left++; }
                    while(left < right && a[right] == a[right-1]) { right--; }
                    
                    left++;
                    right--;
                } else if(s < target){
                    left++;
                } else {
                    right--; // Move right pointer leftward to decrease the sum
                }
            }
        }
        return res;
    }
}
