class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> set;
        int n = grid.size();
        int expsum = ((n*n)*(n*n + 1))/2;
        int actualsum = 0;
        for(int i = 0;i<n;i++){
            for(int j =0;j<n;j++){
                if(set.find(grid[i][j]) != set.end()){
                    int a = grid[i][j];
                    ans.push_back(a);
                    break;
                }else{
                    set.insert(grid[i][j]);
                }
            }
        }

        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                actualsum += grid[i][j];
            }
        }
        int b = expsum + ans[0] - actualsum;
        ans.push_back(b);
        return ans;
    }
};