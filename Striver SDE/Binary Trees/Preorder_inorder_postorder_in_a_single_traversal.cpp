/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    if(root == NULL) return {};
    stack<pair<TreeNode*, int>> s;
    vector <int> inorder,preorder,postorder;
    s.push({root, 1});
    while(!s.empty()){
        auto it = s.top();
        s.pop();
        if(it.second == 1){
            preorder.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->left != NULL) s.push({it.first->left , 1});
        }
        else if(it.second ==2){
            inorder.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->right != NULL) s.push({it.first->right , 1});
        }
        else{
            postorder.push_back(it.first->data);
        }
    }
    vector<vector<int>> ans;
    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);
    return ans;
}