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
    vector<int> l;
    vector<int> r;
    bool isSymmetric(TreeNode* root) {
        l.push_back(root->val);
        r.push_back(root->val);
        lpreorder(root->left);
        root->right = rotate(root->right);
        rpreorder(root->right);
        if(l.size()!=r.size()){
            return false;
        }
        for(int i=0;i<l.size();++i){
            if(l[i]!=r[i]){
                return false;
            }
        }
        return true;
    }
    TreeNode * rotate(TreeNode* root){
        if(root == nullptr){
            return nullptr;
        }
        TreeNode * a = rotate(root->left);
        TreeNode * b = rotate(root->right);
        root->left = b;
        root->right = a;
        return root;
    }
    void lpreorder(TreeNode* root){
        if(root == nullptr){
            l.push_back(INT_MIN);
            return;
        }
        l.push_back(root->val);
        lpreorder(root->left);
        lpreorder(root->right);
    }
    void rpreorder(TreeNode* root){
        if(root == nullptr){
            r.push_back(INT_MIN);
            return;
        }
        r.push_back(root->val);
        rpreorder(root->left);
        rpreorder(root->right);
    }
};