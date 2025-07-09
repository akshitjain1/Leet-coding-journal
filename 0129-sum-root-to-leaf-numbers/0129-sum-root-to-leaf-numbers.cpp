class Solution {
public:
    void helper(TreeNode* root, int current, int& sum) {
        if (!root) return;
        
        current = current * 10 + root->val;
        
        
        if (!root->left && !root->right) {
            sum += current;
            return;
        }
        
        helper(root->left, current, sum);
        helper(root->right, current, sum);
    }
    
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        helper(root, 0, sum);
        return sum;
    }
};
