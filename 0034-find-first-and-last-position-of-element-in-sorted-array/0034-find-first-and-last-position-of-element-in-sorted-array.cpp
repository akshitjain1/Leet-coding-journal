class Solution {
public:
    int Firstoccur(vector<int> arr, int target){
        int ans =-1;
        int low =0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(arr[mid]==target){
                ans = mid;
                high = mid -1;
            }else if (arr[mid] > target){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        return ans;
    }
    int Lastoccur(vector<int> arr, int target){
        int ans =-1;
        int low =0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(arr[mid]==target){
                ans = mid;
                low = mid + 1;
            }else if (arr[mid] > target){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> arr;
        arr.push_back(Firstoccur(nums, target));
        arr.push_back(Lastoccur(nums, target));
        return arr;
    }
};