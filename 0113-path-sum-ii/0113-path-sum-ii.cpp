class Solution {
public:
    void dfs(TreeNode* node, int currentSum, int targetSum, vector<int>& path, vector<vector<int>>& result) {
        if (!node) return;

        currentSum += node->val;
        path.push_back(node->val);

        if (!node->left && !node->right && currentSum == targetSum) {
            result.push_back(path);
        }

        // Continue DFS
        dfs(node->left, currentSum, targetSum, path, result);
        dfs(node->right, currentSum, targetSum, path, result);

        // Backtrack
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(root, 0, targetSum, path, result);
        return result;
    }
};
