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
    int kthSmallest(TreeNode* root, int k) {
       helper(root);
       if(k==1){
        return ans[0];
       }else{
        return ans[k-1];
       }
    }
    void helper(TreeNode* root){
        if(root == nullptr){
            return;
        }
        helper(root->left);
        ans.push_back(root->val);
        helper(root->right);
    }
};