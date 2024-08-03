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
    int x(TreeNode* root){
        if(root==nullptr)return 0;
        int ml = x(root->left);
        if(ml==-1)return -1; 
        int mr = x(root->right);
        if(mr==-1)return -1; 
        if(abs(ml-mr)>1)return -1;
        return 1+max(ml,mr);
    }
    bool isBalanced(TreeNode* root) {
        if(x(root)==-1)return false;
        return true; 
    }
};