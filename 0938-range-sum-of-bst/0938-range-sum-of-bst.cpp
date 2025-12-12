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
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        helper(root);
        for(int i=0;i<ans.size();++i){
            if(ans[i]>=low && ans[i]<=high){
               sum = sum + ans[i];
            }
        }
        return sum;
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