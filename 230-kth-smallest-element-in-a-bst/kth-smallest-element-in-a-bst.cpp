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
    void inor(TreeNode* root,int &i, int k,int &ans){
        
        if(root==NULL)
            return ;

         inor(root->left, i, k,ans);
        i++;
        if( i== k){
            ans=root->val;
            return;
        }
        inor(root->right, i, k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int i=0;
        int ans=-1;
        inor(root, i,k,ans);
        return ans;
    }
};