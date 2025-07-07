/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, vector<int>& tree){
        if(root==nullptr)return;

        if(root->left == NULL && root->right==NULL){
            tree.push_back(root->val);
        }
        helper(root->left,tree);
        helper(root->right,tree);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1;
        vector<int> tree2;
        helper(root1,tree1);
        helper(root2,tree2);
        bool same = false;
        
        return tree1==tree2;
    }
};