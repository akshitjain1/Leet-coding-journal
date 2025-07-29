class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> ans;
        unordered_set<int> set;
        int actualSum = 0;
        int expSum = ((n*n)*(n*n +1 ))/2;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(set.find(grid[i][j]) != set.end()){
                    int a = grid[i][j];
                    ans.push_back(a);
                    break;
                }else{
                    set.insert(grid[i][j]);
                }
            }
        }
        for(int i = 0;i<n;i++){
            for(int j =0;j<n;j++){
                actualSum += grid[i][j];
            }
        }
        int b = expSum + ans[0] - actualSum;
        ans.push_back(b);
        return ans;
    }
};