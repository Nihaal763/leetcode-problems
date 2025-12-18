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
int sum =  0;
    int sumNumbers(TreeNode* root) {
        calc(root,0);
        return sum;
    }
    void calc(TreeNode* root,int value){
        if(root == nullptr){
            return;
        }
        value = value*10 +root->val;
        if(root->left == nullptr && root->right == nullptr){
            sum+= value;
        }
        calc(root->left,value);
        calc(root->right,value);
    }
};