/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, vector<TreeNode*>& ans) {
        if (root == NULL)
            return;

        ans.push_back(root);
        solve(root->left, ans);
        solve(root->right, ans);
    }
    void flatten(TreeNode* root) {
        if(root==NULL)
            return ;
        vector<TreeNode*> ans;
        solve(root, ans);
        for(auto x: ans)
            cout<<x->val<<" ";
        cout<<endl;
        for (int i = 0; i < ans.size(); i++) {
            if (i == ans.size() - 1) {
                ans[i]->left = nullptr;
                ans[i]->right = nullptr;
            } else {
                ans[i]->left = nullptr;
                ans[i]->right = ans[i + 1];
            }
        }
    }
};