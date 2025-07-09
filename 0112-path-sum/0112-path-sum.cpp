class Solution {
public:
    bool helper(TreeNode* node, int currentSum, int targetSum) {
        if (!node) return false;

        currentSum += node->val;

        if (!node->left && !node->right) {
            return currentSum == targetSum;
        }

        if (helper(node->left, currentSum, targetSum)) {
            return true;
        }

        if (helper(node->right, currentSum, targetSum)) {
            return true;
        }

        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, 0, targetSum);
    }
};
