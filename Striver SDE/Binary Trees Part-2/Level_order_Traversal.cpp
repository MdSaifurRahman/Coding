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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        while(!q.empty()){
            int sd = q.size();
            vector<int> res;
            for(int i=0;i<sd;i++){
                TreeNode* it = q.front();
                q.pop();
                if(it->left!=NULL) q.push(it->left);
                if(it->right!=NULL) q.push(it->right);
                res.push_back(it->val);
            }
            ans.push_back(res);
        }
        return ans;
    }
};