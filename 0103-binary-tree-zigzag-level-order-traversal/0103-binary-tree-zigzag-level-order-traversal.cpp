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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)return result;

        queue<TreeNode*> q;
        q.push(root);
        int index =0;
        while(!q.empty()){
            int treesize = q.size();
            vector<int> ans;
            for(int i =0;i<treesize;i++){
                TreeNode* curr = q.front();
                q.pop();
                ans.push_back(curr->val);

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            index++;
            if(index%2==0){
                reverse(ans.begin(),ans.end());
            }
           result.push_back(ans);
        }
       return result;
    }
};