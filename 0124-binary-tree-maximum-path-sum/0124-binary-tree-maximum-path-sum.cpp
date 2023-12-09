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
   int mx_s=0,z=0;
  int cal(TreeNode* root){
      
       if(root==NULL)return 0;
       int lf_s=max(cal(root->left),z);
       int rt_s=max(cal(root->right),z);
      mx_s=max(mx_s,lf_s+rt_s+root->val);
      return max(rt_s+root->val,lf_s+root->val);
   }
public:
    int maxPathSum(TreeNode* root) {
       mx_s=root->val;
        cal(root);
        return mx_s;
    }
};