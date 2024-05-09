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
    int ans=0;
    struct Info {
        int min;
        int max;
        int sum;
        bool bst;
        Info(){
           bst=true;
        min=INT_MIN;
        max=INT_MAX;
        sum=0; 
        }  
    };
    
    Info cal(TreeNode * head){
        
         if(head==NULL)
        {
        Info b;
            b.max=INT_MIN;
            b.min=INT_MAX;
             
            return b;
        }
      if(!head->left&&!head->right){
          Info h;
          h.min=head->val;
          h.max=head->val;
          h.sum=head->val;
          ans=max(ans,h.sum);
          return h;
      }
      Info l=cal(head->left);
      Info r=cal(head->right);
        ans=max(ans,r.sum);
        ans=max(ans,l.sum);
      
    
      if(l.bst&&r.bst&&l.max<head->val&&r.min>head->val){
        
          Info n;
          
          n.min=min(l.min,head->val);
          n.max=max(r.max,head->val);
          n.sum=head->val+l.sum+r.sum; ans=max(ans,n.sum);
          return n;
      }
    else{
          Info m;
        m.sum=max(l.sum,r.sum);
         ans=max(ans,m.sum);
       // cout<<l.sum<<" "<<r.sum<<" "< <<endl;
    
    return m;
    }
    
         
    }
public:
    int maxSumBST(TreeNode* root) {
        Info f=cal(root);
         ans=max(ans,f.sum);
        return max(0,ans);
    }
};
