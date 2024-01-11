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
    int c=0;
    void cal(TreeNode* rt,int lf=-1,int cunt=0){
        
        if(rt==NULL)return ; c=max(c,cunt);
        if(lf==0){
            cal(rt->right,1,cunt+1);
            cal(rt->left,0,1);
        }
        else{
           cal(rt->right,1,1);
            cal(rt->left,0,cunt+1); 
        }
        
    }
public:
    int longestZigZag(TreeNode* root) {
        cal(root);
        return c;
    }
};