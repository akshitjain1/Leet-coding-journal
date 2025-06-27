class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int n=arr.size();
        if(n<3){
            return false;
        }
        int pi=0;
        while( pi + 1 < n && arr[pi] < arr[pi +1]){
            pi++;
        }
        if(pi == 0 || pi == n-1){
            return false;
        }
        while(pi + 1 < n && arr[pi]>arr[pi + 1]){
            pi++;
        }

        return pi == n-1;
    }
};