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
    vector<int> ans;
    TreeNode* increasingBST(TreeNode* root) {
        helper(root);
        TreeNode * nn = new TreeNode(ans[0]);
        root = nn;
        for(int i=1;i<ans.size();++i){
            nn->right = new TreeNode(ans[i]);
            nn = nn->right;
        }
        return root;
    }
    void helper(TreeNode * root){
        if(root == nullptr){
            return;
        }
        helper(root->left);
        ans.push_back(root->val);
        helper(root->right);
    }
};