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
    int countNodes(TreeNode* root) {
        preorder(root);
        return ans.size();
    }
    void preorder(TreeNode* root){
        if(root == nullptr){
            return;
        }
        preorder(root->left);
        ans.push_back(root->val);
        preorder(root->right);
    }
};