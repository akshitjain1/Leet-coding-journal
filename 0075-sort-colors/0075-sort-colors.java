class Solution {
    public void sortColors(int[] nums) {
        int low =0, mid =0, high =nums.length-1;
        while(mid<=high){
            if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                mid++;
                low++;
            }else if(nums[mid]==2){
                int temp = nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }else{
                mid++;
            }
        }
    }
}

// class Solution {
//     public void sortColors(int[] nums) {
//         int z=0,o=0,t=0;
    
//         for(int i = 0;i<nums.length;i++){
//             if(nums[i]==0){z++;}
//             else if(nums[i]==1){o++;}
//             else{t++;}
//         }
//         o=z+o;
//         t=t+o;
//         for(int i =0 ; i<nums.length; i++){
//             if(i<z){
//                 nums[i]=0;
//             }else if(i<o){
//                 nums[i]=1;
//             }else{
//                 nums[i]=2;
//             }
//         }
//     }
// }