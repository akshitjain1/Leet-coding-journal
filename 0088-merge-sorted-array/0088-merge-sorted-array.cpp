class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int> result;
        // for(int i =0 ;i<m;i++){
        //     result.push_back(nums1[i]);
        // }
        // for(int i =0 ;i<n;i++){
        //     result.push_back(nums2[i]);
        // }
        // sort(result.begin(), result.end());
        // nums1 = result;

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--]; 
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
