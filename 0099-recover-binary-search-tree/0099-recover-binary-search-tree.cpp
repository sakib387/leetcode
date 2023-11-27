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
     TreeNode *first = NULL;
  TreeNode *second = NULL;
  TreeNode *pre = NULL;

  void cal(TreeNode *root) {
    if (root == NULL)
      return;
        cal(root->left);
        if(pre!=NULL&&pre->val>root->val){
            if(first==NULL)
            first=pre;
            second=root;
            //cout<<first->val<<" "<<second->val<<endl;
        }
        pre=root;
        cal(root->right);
    }
    
  
    void recoverTree(TreeNode* root) {
        cal(root);
        swap(first->val,second->val);
       // cout<<first->val<<" "<<second->val;
       // prin(root);
    }
};