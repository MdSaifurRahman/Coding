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
    int res(TreeNode* root, int &maxi){
        if(root == nullptr)return 0;
        int leftval = max(0, res(root->left, maxi));
        int rightval = max(0, res(root->right, maxi));
        maxi = max(maxi, root->val + leftval + rightval);
        return max(leftval , rightval)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        res(root , maxi);
        return maxi;
    }
};