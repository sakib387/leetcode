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
    bool ans=true;
    void cal(TreeNode* root,long long left_r,long long right_r){
        if(root->left!=NULL){
            if(root->left->val<root->val&&root->left->val>left_r&&root->left->val<right_r){
                cal(root->left,left_r,root->val);
            }
            else ans=false;
        }
        if(root->right!=NULL){
            if(root->right->val>root->val&&root->right->val>left_r&&root->right->val<right_r){
                cal(root->right,root->val,right_r);
            }
            else ans=false;
        }
        return ;
    }
public:
    bool isValidBST(TreeNode* root) {
        long long int a=INT_MAX;a++;
        long long b=-a;b--;
        cout<<root->val<<" "<<a<<" "<<b;
        cal(root,b,a);
        return ans;
    }
};