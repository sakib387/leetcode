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
    pair<int,int> cal(TreeNode* root){
        if(root==nullptr){
            return {0,0};
        }
        pair<int,int>lf,rt;
        lf=cal(root->left);
        rt=cal(root->right);
        pair<int,int>p;
        p.first=max((lf.second+rt.second)+root->val,lf.first+rt.first);
        p.second=max((lf.first+rt.first),lf.second+rt.second);
        cout<<root->val<<" "<<p.first<<" "<<p.second<<endl;
        return p;
        
    }
public:
    int rob(TreeNode* root) {
        pair<int,int>p=cal(root);
        return max(p.first,p.second);
    }
};