class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n,0));

        for(int i =0;i<n;i++){
            dp[0][i] = matrix[0][i];
        }

        for(int i = 1 ; i<n;i++){
            for(int j = 0; j<n;j++){
                int up = dp[i-1][j];
                int left = (j>0) ? dp[i-1][j-1] : INT_MAX;
                int right = (j<n-1) ? dp[i-1][j+1] : INT_MAX;

                dp[i][j] =  matrix[i][j] + min({up,left,right});
            }
        }

        int result = INT_MAX;
        for(int j =0;j<n;j++){
            result  = min(result,dp[n-1][j]);
        }
        return result;

    }
};