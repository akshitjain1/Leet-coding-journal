class Solution {
public:
     void func(vector<int> nums , vector<vector<int>>& result, vector<int>& temp,vector<bool>& use){
        if(temp.size() == nums.size()){
        result.push_back(temp);
        return;
        }
        for(int i=0; i<nums.size();i++){
            if(use[i])continue;

            use[i]=true;
            temp.push_back(nums[i]);
            func(nums,result,temp,use);
            temp.pop_back();
            use[i]=false;
        }
    };
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> result;
        vector <int> temp;
        vector <bool> use(nums.size(),false);
        func(nums, result, temp,use);
        return result;
    }
};