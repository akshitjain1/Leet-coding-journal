class Solution {
public:
    void helper(TreeNode* node, string path, string& result) {
        if (!node) return;

        path = char('a' + node->val) + path;

        if (!node->left && !node->right) {
            if (result.empty() || path < result) {
                result = path;
            }
            return;
        }

        helper(node->left, path, result);
        helper(node->right, path, result);
    }

    string smallestFromLeaf(TreeNode* root) {
        string result = "";
        helper(root, "", result);
        return result;
    }
};
