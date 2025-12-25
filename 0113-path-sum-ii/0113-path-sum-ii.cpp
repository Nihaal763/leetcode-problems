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
    vector<vector<int>>ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>a;
        helper(root,targetSum,a);
        return ans;
    }
    void helper(TreeNode* root,int targetSum,vector<int>a){
        if(root == nullptr){
            return;
        }
         a.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr){
            if(targetSum==root->val){
               ans.push_back(a);
            }
            return;   
        }
        helper(root->left,targetSum-root->val,a);
        helper(root->right,targetSum-root->val,a);
    }

};