class Solution {
public:

    void func(vector<int> arr, int target, vector<vector<int>>& result, vector<int>& temp, int start){
        if(target == 0){
            result.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        for(int i =start;i<arr.size();i++){
            if(arr[i]>target)continue;
            temp.push_back(arr[i]);
            func(arr,target-arr[i],result, temp,i);
            temp.pop_back();
        }
    };
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        func(candidates, target, result, temp,0);
        return result;
    }
};