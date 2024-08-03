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
        int find_max(TreeNode* root, int &m){
            if(root==nullptr)return 0;
            int lh = find_max(root->left, m);
            int rh = find_max(root->right,m);
            m = max(m,lh+rh);
            return 1+max(lh,rh);
        }
    int diameterOfBinaryTree(TreeNode* root) {
        int m = 0;
        find_max(root, m);
        return m;
    }
};